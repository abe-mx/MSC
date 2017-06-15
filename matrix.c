#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void initMatrix (float *** m, int rows, int cols) {
  // creating the matrix
  int i;

  *m = calloc(rows, sizeof(float *));
  if (*m != NULL)
    printf("\nOK1(%d) ",rows);
  else {
    fprintf(stderr,"No hay suficinte memoria\n");
    exit(1);
  }

  for (i = 0; i < rows; i++) {
    (*m)[i] = calloc(cols, sizeof(float));
    printf("\nOK2(%d) ",i);
  }
  printf("\nBye!");
}

void printMatrix (float ** m,int rows, int cols) {
  int i,j;
  if (m) {
    printf("\nOK3");
    for (i = 0; i < rows; i++) {
      printf("\n(%d)",i);
      for(j = 0; j < cols; j++){
        printf("\n  (%d)",j);
        printf("%f5.2 ",m[i][j]);
      }
    }
  } else {
    printf("\nPointer is null");
  }
}

void multMatrix (float ** m1, float ** m2, float ** m3, int rows, int colsrows, int cols2) {
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
  float ** m1 = NULL;
  int i, j;
  /*float ** m2 = NULL; */

  printf("Rows for the first matrix: ");
  scanf("%d",&rows);

  printf("Cols for the first matrix / Rows for the second matrix: ");
  scanf("%d",&colsrows);

  printf("Cols for the second matrix: ");
  scanf("%d",&cols2);

  //creating the matrixes
  //  first matrix: rows:a, cols:b
  // second matrix: rows:b, cols:c
  initMatrix (&m1, rows, colsrows);
  printf("\nm1 (%d,%d)is OK",rows,colsrows);


/*
  initMatrix (m2, colsrows, cols2);
  printf("\nm2 (%d,%d)is OK",colsrows,cols2);
*/
  // populating the first matrix
  printf("\n+ Give me the values for the first matrix...");
  for(i = 0; i < rows; i++) {
    printf("\n(%d) : ",i);
    for(j = 0; j < colsrows; j++){
      printf("\n  (%d) : ",j);
      scanf("%f",&m1[i][j]);
    }
  }
  printMatrix(m1, rows, colsrows);
/*
  // populating the second matrix
  printf("\n+Now give me the values for the second matrix:");
  for (i = 0; i < colsrows; i++) {
    printf("\n(%d)",i);
    for(j = 0; j < cols2; j++){
      printf("\n  (%d)",i);
      scanf("%f",&m2[i][j]);
    }
  }
  printMatrix(m2, colsrows, cols2);
*/
  getchar();
  return 0;
}
