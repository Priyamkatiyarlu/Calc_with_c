#include <stdio.h>
int printresult(int x,int y,int arr[100][100]){
        for(int i=0; i<x; i++){
        printf("\n");
        for(int j=0; j<y; j++)
        printf("%d\t",arr[i][j]);
        }
        
    }
   int matrixinput(int x,int y,int arr[100][100]){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    }
void edit(int arr[100][100],int x,int y){
    printf("\t\t Original matrix \t\t");
    printresult(x,y,arr);
    printf("\n\n");
    printf("\t\t Edit matrix \t\t");
    printf("\n");
    matrixinput(x,y,arr);
    printf("\n\n");
    printf("\t\t Edited matrix \t\t");
    printresult(x,y,arr);
    }

int main()
{
    int arr1[100][100];
    int i,j,k,x1,y1;
    printf("Enter the rows: \n");
    scanf("%d",&x1);
    printf("Enter the columns: \n");
    scanf("%d",&y1);
    printf("\nEnter the elements of the matrix one by one: \n");
    for(i = 0 ; i < x1 ; i++)
    {
        for(j = 0 ; j < y1 ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i = 0 ; i < x1 ; i++)
    {
        for(j = 0 ; j < y1 ; j++)
        {
            printf("%d   ",arr1[i][j]);
        }
        printf("\n");
    }
    edit(arr1,x1,y1);
    for(i = 0 ; i < x1 ; i++)
    {
        for(j = 0 ; j < y1 ; j++)
        {
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
}