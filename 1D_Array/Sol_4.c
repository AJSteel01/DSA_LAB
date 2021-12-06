// C Program to identify Maximum element in a User Inputed Matrix.

#include<stdio.h>

void main()
{   
	int r1, c1, flag;
    printf("Enter No. of Rows Matrix 1 : ");
    scanf("%d", &r1);
    printf("Enter No. of Columns Matrix 1 : ");
    scanf("%d", &c1);

    int M1[r1][c1];

	//Input of M1 matrix

		printf("Enter the M1 matrix Input\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				scanf("%d", &M1[i][j]);

			}
		}

        flag = M1[0][0];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                if (M1[i][j]>flag)
                {
                    flag = M1[i][j];
                }
                
            }
            
        }
        printf("The Greatest Value In Matrix Is : %d", flag);
}
        
