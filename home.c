#include <stdio.h>
#include <stdio.h>
#define Esc 27
int matrixsubstraction(){
    int x1,y1,x2,y2,sum;
    printf("Enter no of rows of first matrix=");
    scanf("%d",&x1);
    printf("Enter no of columns of first matrix=");
    scanf("%d",&y1);
    printf("Enter no of rows of second matrix=");
    scanf("%d",&x2);
    printf("Enter no of columns of second matrix=");
    scanf("%d",&y2);
    int arr1[x1][y1];
    int arr2[x2][y2];
    int res[x1][y1];
    if (x1==x2 && y1==y2){    //Checking for desired condition
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
    for(int i=0;i<x1;i++){         //computing for result
        for(int j=0; j<y2; j++){
                res[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    //printing result
    printf("\t\t\t\t\t\t\tSubstracted matrix\t\t\t\t\t\t\t");
    for(int i=0; i<x1; i++){
        printf("\n");
        for(int j=0; j<y1; j++)
        printf("%d\t",res[i][j]);
        }
        
    }
    else{
        printf("\nMatrix cannot be Substracted\n");
    }
}
int matrixaddition(){
    int x1,y1,x2,y2,sum;
    printf("Enter no of rows of first matrix=");
    scanf("%d",&x1);
    printf("Enter no of columns of first matrix=");
    scanf("%d",&y1);
    printf("Enter no of rows of second matrix=");
    scanf("%d",&x2);
    printf("Enter no of columns of second matrix=");
    scanf("%d",&y2);
    int arr1[x1][y1];
    int arr2[x2][y2];
    int res[x1][y1];
    if (x1==x2 && y1==y2){   //checking for desired result
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
                res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\t\t\t\t\t\t\tAdded matrix\t\t\t\t\t\t\t");
    for(int i=0; i<x1; i++){       //printing desired result
        printf("\n");
        for(int j=0; j<y1; j++)
        printf("%d\t",res[i][j]);
        }
        
    }
    else{
        printf("Matrix cannot be added");
    }
}
int matrixmultiplication(){
    int x1,y1,x2,y2,sum;
    printf("Enter no of rows of first matrix=");
    scanf("%d",&x1);
    printf("Enter no of columns of first matrix=");
    scanf("%d",&y1);
    printf("Enter no of rows of second matrix=");
    scanf("%d",&x2);
    printf("Enter no of columns of second matrix=");
    scanf("%d",&y2);
    int arr1[x1][y1];
    int arr2[x2][y2];
    int res[x1][y2];
    if (y1==x2){
    for(int i=0; i<x1; i++){
        for(int j=0; j<y1; j++){
        printf("Enter arr[%d][%d] element of first array=",i,j);
        scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0; i<x2; i++){
        for(int j=0; j<y2; j++){
        printf("Enter arr[%d][%d] element of array=",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<x1;i++){
        for(int j=0; j<y2; j++){
            sum=0;
            for(int k=0; k<y1; k++){
                sum+=arr1[i][k]*arr2[k][j];
                res[i][j]=sum;
                        }
        }
    }
    printf("\t\t\t\t\t\t\tMultiplied matrix\t\t\t\t\t\t\t");
    for(int i=0; i<x1; i++){
        printf("\n");
        for(int j=0; j<y2; j++)
        printf("%d\t",res[i][j]);
        }
        
    }
    else{
        printf("Matrix cannot be multiplied");
    }
}
int matrix(){
    printf("\n1. Matrix multiplication \n2. Matrix addition \n3. Matrix substraction\n");
    int n;
    printf("\nEnter your choice:\t\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        matrixmultiplication();
        printf("\n");
        break;
        case 2:
        matrixaddition();
        printf("\n");
        break;
        case 3:
        matrixsubstraction();
        printf("\n");
        break;
    }
}
    int main(){
        printf("1. Matrix\n2. Exit\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        matrix();
        printf("\n");
        break;
        case 2:
        return 0;

    }
}