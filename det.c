#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>
float det(float A[25][25], int n)
{
    float Minor[25][25];
    int i,j,k,c1,c2;
    float determinant;
    float c[25];
    int O=1;

    if(n == 2)
    {
        determinant = 0;
        determinant = A[0][0]*A[1][1]-A[0][1]*A[1][0];
        return determinant;
    }
    else
    {
        for(i = 0 ; i < n ; i++)
        {
            c1 = 0, c2 = 0;
            for(j = 0 ; j < n ; j++)
            {
                for(k = 0 ; k < n ; k++)
                {
                    if(j != 0 && k != i)
                    {
                        Minor[c1][c2] = A[j][k];
                        c2++;
                        if(c2>n-2)
                        {
                            c1++;
                            c2=0;
                        }
                    }
                }
            }
            determinant = determinant + O*(A[0][i]*det(Minor,n-1));
            O=-1*O;
        }
    }
    return determinant;
}
 
void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * det(b, f - 1);
    }
  }
            for(i = 0 ; i < f ; i++)
    {
        for(j = 0 ; j < f ; j++)
        {
            printf("%f  ",fac[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    float A[25][25];
    int i,j,k,n,res;
    printf("Enter the order of the matrix: \n");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix one by one: \n");
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    cofactor(A,n);
}