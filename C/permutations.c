#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s) {
  // Find the largest index k such that s[k] < s[k+1]
  int k;
  for (k = n - 2; k >= 0; k--) {
    if (strcmp(s[k], s[k + 1]) < 0) {
      break;
    }
  }
  if (k < 0) {
    return 0; // No next permutation exists
  }

  // Find the largest index l greater than k such that s[k] < s[l]
  int l;
  for (l = n - 1; l > k; l--) {
    if (strcmp(s[k], s[l]) < 0) {
      break;
    }
  }

  // Swap s[k] and s[l]
  char *temp = s[k];
  s[k] = s[l];
  s[l] = temp;

  // Reverse the sequence from s[k+1] up to and including the final element
  // s[n-1]
  for (int i = k + 1, j = n - 1; i < j; i++, j--) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

  return 1; // Next permutation exists
}

int main() {
  char **s;
  int n;
  scanf("%d", &n);
  s = calloc(n, sizeof(char *));
  for (int i = 0; i < n; i++) {
    s[i] = calloc(11, sizeof(char));
    scanf("%s", s[i]);
  }
  do {
    for (int i = 0; i < n; i++)
      printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
  } while (next_permutation(n, s));
  for (int i = 0; i < n; i++)
    free(s[i]);
  free(s);
  return 0;
}
