#include <stdio.h>

int main(void) {
  int i = 0;

  /* Check if i is positive or negative */
  if (i > 0) {
    printf("i is positive\n");
  } else if (i < 0) {
    printf("i is negative\n");
  } else {
    printf("i is zero\n");
  }

  return 0;
}
