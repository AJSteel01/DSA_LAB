#include <stdio.h>
int main()
{
   int a[100][100], transpose[100][100], row, column, i, j;
   printf("Enter rows and columns: ");
   scanf("%d %d", &row, &column);

   printf("\nEnter elements of the Matrix:\n");
   for (i=0; i<row; i++)
      for (j=0; j<column; j++)
      {
         scanf("%d", &a[i][j]);
      }

   for (i=0; i<row; i++)
      for (j=0; j<column; j++)
      {
         transpose[j][i] = a[i][j];
      }

   printf("\nTranspose of the matrix:\n");
   for (i = 0; i < column; i++)
      for (int j = 0; j < row; j++)
      {
         printf("%d  ", transpose[i][j]);
         if (j == row-1)
            printf("\n");
      }
   return 0;
}