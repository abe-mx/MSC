#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void initMatrix (unsigned char *** m, int rows, int cols) {
  // creating the matrix
  *m = (unsigned char**) malloc(rows * sizeof(unsigned char *));
  printf("\nOK1(%d) ",rows);
  for (int i = 0; i < rows; i++) {
    *m[i] = (unsigned char*) malloc(cols * sizeof(unsigned char));
    printf("\nOK2(%d) ",i);
  }
  printf("\nBye!");
}

void printMatrix (unsigned char ** m,int rows, int cols) {
  if (m) {
    printf("\nOK3");
    for (int i = 0; i < rows; i++) {
      printf("\n(%d)",i);
      for(int j = 0; j < cols; j++){
        printf("\n  (%d)",j);
        printf("%c ",m[i][j]);
      }
    }
  } else {
    printf("\nPointer is null");
  }
}

void multMatrix (unsigned char ** m1, unsigned char ** m2, unsigned char ** m3, int rows, int colsrows, int cols2) {
  if (!(rows > 1 && colsrows > 1 && cols2 > 1)) {
    m3 = NULL;
    printf("\n rows, colsrows, cols2 must be greater than 1");
  } else {

  }

}
int main() {
  // get matrix sizes
  int rows;
  int colsrows;
  int cols2;

  printf("Rows for the first matrix: ");
  scanf("%d",&rows);

  printf("Cols for the first matrix / Rows for the second matrix: ");
  scanf("%d",&colsrows);

  printf("Cols for the second matrix: ");
  scanf("%d",&cols2);

  //creating the matrixes
  //  first matrix: rows:a, cols:b
  // second matrix: rows:b, cols:c
  unsigned char ** m1 = NULL;
  initMatrix (&m1, rows, colsrows);
  printf("\nm1 (%d,%d)is OK",rows,colsrows);
/*
  static unsigned char ** m2 = NULL;
  initMatrix (m2, colsrows, cols2);
  printf("\nm2 (%d,%d)is OK",colsrows,cols2);
*/
  // populating the first matrix
  printf("\n+ Give me the values for the first matrix...");
  for(int i = 0; i < rows; i++) {
    printf("\n(%d)",i);
    for(int j = 0; j < colsrows; j++){
      printf("\n  (%d)",j);
      scanf("%c",&m1[i][j]);
    }
  }
  printMatrix(m1, rows, colsrows);
/*
  // populating the second matrix
  printf("\n+Now give me the values for the second matrix:");
  for (int i = 0; i < colsrows; i++) {
    printf("\n(%d)",i);
    for(int j = 0; j < cols2; j++){
      printf("\n  (%d)",i);
      scanf("%c",&m2[i][j]);
    }
  }
  printMatrix(m2, colsrows, cols2);
*/
  getchar();
  return 0;
}
