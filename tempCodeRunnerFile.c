#include<stdio.h>
int x1,y1,x2,y2,x3,y3;
int arr1[100][100];
int arr2[100][100];
int arr3[100][100];
int res[100][100];

void transmat(int x, int y,int (*array)[y]){
    int arr[x][y];
    int res[x][y];
    for(int i=0;i<x;i++){
        for(int j=0; j<y; j++){
                printf("%d\t",*(*(array+j)+i));
            }
            printf("\n");
        }
        }
void printresult(int x, int y, int(*array)[y]){
    int i=0;
    int j=0;
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d\t",*(*(array+i)+j));
        }
        printf("\n");
        }
}
int matrixrc(int *x,int *y){
    printf("Enter no of rows=");
    scanf("%d",&*x);
    printf("Enter no of columns=");
    scanf("%d",&*y);
}
   void matrixinput(int x, int y, int(*array)[y]){
    int i=0;
    int j=0;
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("MatA[%d][%d]:\t",i+1,j+1);
            scanf("%d",&*(*(array+i)+j));
        }
        }
}
    int printmatA(){
    printresult(x1,y1,arr1);
    }
    int printmatB(){
    printresult(x2,y2,arr2);
    }
    int printmatC(){
    printresult(x3,y3,arr3);
    }
        void dim(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        matrixrc(&x1,&y1);
        matrixinput(x1,y1,arr1);
        break;
        case 2:
        matrixrc(&x2,&y2);
        matrixinput(x2,y2,arr2);
        break;
        case 3:
        matrixrc(&x3,&y3);
        matrixinput(x3,y3,arr3);
        break;

    }
}
        void trans(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        transmat(x1,y1,arr1);
        break;
        case 2:
        transmat(x2,y2,arr2);
        break;
        case 3:
        transmat(x3,y3,arr3);
        break;

    }
}  
void display(){
        printf("1. Display MatA\n2. Display MatB\n3.Display MatC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        printmatA();
        break;
        case 2:
        printmatB();
        break;
        case 3:
        printmatC();
        break;

    }
}
int main(){
        printf("1. Dim\n2. Edit\n3. Mat\n4. Det\n5. Trans\n6. display\n7. Exit\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        dim();
        break;
        case 2:
        break;
        case 3:
        break;
        case 5:
        trans();
        break;
        case 6:
        display();
        break;
        case 7:
        return 0;

    }
    main();

}
