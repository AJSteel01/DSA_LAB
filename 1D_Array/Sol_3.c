// C Program to compare Right Diagonal Element & Left Diagonal Element Sum

#include<stdio.h>

void main()
{   
	int r1, c1;
    printf("Enter No. of Rows Matrix 1 : ");
    scanf("%d", &r1);
    printf("Enter No. of Columns Matrix 1 : ");
    scanf("%d", &c1);

    int M1[r1][c1], Rsum = 0, Lsum =0;
    int m = r1;

	//Input of M1 matrix

		printf("Enter the M1 matrix Input\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				scanf("%d", &M1[i][j]);

			}
		}

        if (r1 == c1) {
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    if (i == j)
                    {
                        Rsum = Rsum + M1[i][j];
                    }
                    
                }
                
            }
            printf("Sum of Right Diagonal Elements : %d\n", Rsum);
        
            for (int i = 0; i < r1; i++)
            {
                m = m-1;
                for (int j = 0; j < c1; j++)
                {
                    if (j == m)
                    {
                        Lsum = Lsum + M1[i][j];
                    }
                    
                }
                
            }
            printf("Sum of Left Diagonal Elements : %d\n", Lsum);

            if (Rsum > Lsum)
            {
                printf("Sum of Right Diagonal Elements (%d) is Greater Than the sum of Left Diagonal Elements(%d) ", Rsum, Lsum);
            }
            else if (Lsum > Rsum)
            {
                printf("Sum of Left Diagonal Elements (%d) is Greater Than the sum of Right Diagonal Elements(%d) ", Lsum, Rsum);
            }
            else
            {
                printf("Sum of Right Diagonal Elements (%d) and the sum of Left Diagonal Elements(%d) Is Equal ", Rsum, Lsum);
            }
            
            
        }

        else {
            printf("Matrix Isn't Square");
        }
}
        