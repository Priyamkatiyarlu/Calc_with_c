#include <stdio.h>
#include<conio.h>
#define BKSPC 8
void edit(int arr[100][100],int x,int y){
    char ch;

for(int i = 0 ; i < x ; i++)
    {
        for(int j = 0 ; j < y ; j++)
        {
            ch=getch();
            printf("MatA:\t%d",arr[i][j]);
            scanf("%d",&arr[i][j]);
            if (ch == BKSPC){
            printf("\b \b");
            scanf("%d",&arr[i][j]);
            }
        }
    }

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