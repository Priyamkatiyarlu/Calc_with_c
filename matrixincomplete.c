#include<stdio.h>
int printresult1(int x1,int y1,int arr1[x1][y1]){
        for(int i=0; i<x1; i++){
        printf("\n");
        for(int j=0; j<y1; j++)
        printf("%d\t",arr1[i][j]);
        }
        
    }
int matrixrc1(int *x1,int *y1){
    printf("Enter no of rows=");
    scanf("%d",&*x1);
    printf("Enter no of columns=");
    scanf("%d",&*y1);
}
int matrixrc2(int *x2,int *y2){
    printf("Enter no of rows=");
    scanf("%d",&*x2);
    printf("Enter no of columns=");
    scanf("%d",&*y2);
}
int matrixrc3(int *x3,int *y3){
    printf("Enter no of rows=");
    scanf("%d",&*x3);
    printf("Enter no of columns=");
    scanf("%d",&*y3);
}
   int matrixinput1(int x1,int y1,int arr1[x1][y1]){
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    }
    int matrixinput2(int x2,int y2,int arr2[x2][y2]){
    for(int i=0; i<x2; i++){
        for(int j=0; j<y2; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%d",&arr2[i][j]);
        }
    }
    }
    int matrixinput3(int x3,int y3,int arr3[x3][y3]){
    for(int i=0; i<x3; i++){
        for(int j=0; j<y3; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%d",&arr3[i][j]);
        }
    }
    }
    int matA(){
    int x1,y1;
    matrixrc1(&x1,&y1);
    int arr1[x1][y1];
    matrixinput1(x1,y1,arr1);
    }
    int matB(){
    int x2,y2;
    matrixrc2(&x2,&y2);
    int arr2[x2][y2];
    matrixinput2(x2,y2,arr2);
    }
    int matC(){
    int x3,y3;
    matrixrc3(&x3,&y3);
    int arr3[x3][y3];
    matrixinput3(x3,y3,arr3);
    }
        int main(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        matA();
        break;
        case 2:
        matB();
        break;
        case 3:
        matC();
        break;

    }
}