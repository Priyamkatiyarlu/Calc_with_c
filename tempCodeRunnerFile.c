#include <stdio.h>
#include <stdio.h>
int main(){
    int x1,y1,x2,y2,sum;
    printf("Enter no of rows=");
    scanf("%d",&x1);
    printf("Enter no of columns=");
    scanf("%d",&y1);
    printf("Enter no of rows of second matrix=");
    scanf("%d",&x2);
    printf("Enter no of columns of second matrix=");
    scanf("%d",&y2);
    int arr1[x1][y1];
    int arr2[x2][y2];
    int res[x1][y1];
    if (x1==x2 && y1==y2){
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
        printf("Enter arr[%d][%d] element of first matrix=",i,j);
        scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0; i<x2; i++){
        for(int j=0; j<y2; j++){
        printf("Enter arr[%d][%d] element of second matrix=",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<x1;i++){
        for(int j=0; j<y2; j++){
                res[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for(int i=0; i<x1; i++){
        printf("\n");
        for(int j=0; j<y1; j++)
        printf("%d\t",res[i][j]);
        }
        
    }
    else{
        printf("Matrix cannot be Substracted");
    }
}