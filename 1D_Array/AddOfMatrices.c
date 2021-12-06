#include <stdio.h>
#include <conio.h>
void main(){
    //taking input of rows and cols of matrices
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);

    //taking input of matrix 1
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    //Displaying matrix A
    printf("matrix 1 is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr1[i][j]);
        }
    }

    //input of matrix 2
    int arr2[m][n];
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    //Displaying matrix 2
    printf("matrix 2 is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr2[i][j]);
        }
    }
    //Addition of two matrices
    int arr3[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr2[i][j]+arr1[i][j];
        }
    }
    //Display of matrix 3
    printf("\nThe additon of matrices 1 and 2 is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d" " " ,arr3[i][j]);
        }
    }
}