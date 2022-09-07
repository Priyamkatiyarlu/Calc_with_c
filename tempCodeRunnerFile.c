#include <stdio.h>
int printresult(int x1,int y2,int res[x1][y2]){
        for(int i=0; i<x1; i++){
        printf("\n");
        for(int j=0; j<y2; j++)
        printf("%d\t",res[i][j]);
        }
        
    }
int matrixinput(int *x1,int *y1,int *x2,int *y2){
    printf("Enter no of rows=");
    scanf("%d",&*x1);
    printf("Enter no of columns=");
    scanf("%d",&*y1);
    printf("Enter no of rows of second matrix=");
    scanf("%d",&*x2);
    printf("Enter no of columns of second matrix=");
    scanf("%d",&*y2);
}
   int matrixrc(int x1,int y1,int x2,int y2,int arr1[x1][y1],int arr2[x2][y2]){
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
    }
int main(){
    int x1,y1,x2,y2;
    matrixinput(&x1,&y1,&x2,&y2);
    printf("x1 %d y1 %d x2 %d y2 %d",x1,y1,x2,y2);
    int arr1[x1][y1];
    int arr2[x2][y2];
    int res[x1][y1];
    if (x1==x2 && y1==y2){
        matrixrc(x1,y1,x2,y2,arr1,arr2);
    }
    printresult(x1,y2,res);
    
}
