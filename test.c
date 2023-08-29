#include <stdio.h>

int main(void) {
  // print wall of dimensions rXc
  int row, col;
  printf("enter the dimensions in the format [rxc]: ");
  scanf("%ix%i", &row, &col);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("#");
      fflush(stdout);
    }
    printf("\n");
  }
}