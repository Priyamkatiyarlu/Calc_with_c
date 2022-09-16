#include<stdio.h>
#include<math.h>
int x1,y_1,x2,y2,x3,y3;
float arr1[100][100];
float arr2[100][100];
float arr3[100][100];
float res[100][100];
float det(float A[100][100], int n)
{
    float Minor[100][100];
    int i,j,k,c1,c2;
    float determinant;
    float c[100];
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
void cofactor(float num[100][100], float f)
{
 float b[100][100], fac[100][100];
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
            printf("conj %f  ",fac[i][j]);
        }
        printf("\n");
    }   //transpose calling
}
void printresult(int x,int y,float arr[100][100]){
        for(int i=0; i<x; i++){
        printf("\n");
        for(int j=0; j<y; j++)
        printf("%.3f\t",arr[i][j]);
        }
        
    }
void matrixrc(int *x1,int *y1){
    printf("Enter no of rows=");
    scanf("%d",&*x1);
    printf("Enter no of columns=");
    scanf("%d",&*y1);
}
   void matrixinput(int x,int y,float arr[100][100]){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%f",&arr[i][j]);
        }
    }
    }
    int edit(int *x,int *y, float arr[100][100]){
        printf("1. Edit Dimension\n2. Edit Matrix\n3. Exit\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Original Dimrnsion is %d X %d.",*x,*y);
        printf("\n\t\tEdit Dimensions.\n");
        matrixrc(x,y);
        case 2:
        printf("\t\t Original matrix \t\t");
        printresult(*x,*y,arr);
        printf("\n\n");
        printf("\t\t Edit matrix \t\t");
        printf("\n");
        matrixinput(*x,*y,arr);
        printf("\n\n");
        printf("\t\t Edited matrix \t\t");
        printresult(*x,*y,arr);
        break;
        case 3:
        return 0;

    }
    }
        void editopt(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        edit(&x1,&y_1,arr1);
        break;
        case 2:
        edit(&x2,&y2,arr2);
        break;
        case 3:
        edit(&x3,&y3,arr3);
        break;

    }
} 
        void dim(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        matrixrc(&x1,&y_1);
        matrixinput(x1,y_1,arr1);
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
    int printmatA(){
    printresult(x1,y_1,arr1);
    }
    int printmatB(){
    printresult(x2,y2,arr2);
    }
    int printmatC(){
    printresult(x3,y3,arr3);
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
    int transmat(int x, int y,float array[100][100]){
    float res[x][y];
     for(int i=0;i<x;i++){
        for(int j=0; j<y; j++){
                res[j][i]=array[i][j];
            }
        }
    for(int i=0;i<y;i++){
        for(int j=0; j<x; j++){
                printf("%.3f\t",res[i][j]);
            }
            printf("\n");
        }
        }
    void trans(){
        printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        transmat(x1,y_1,arr1);
        break;
        case 2:
        transmat(x2,y2,arr2);
        break;
        case 3:
        transmat(x3,y3,arr3);
        break;

    }
} 
void detopt(){
    printf("1. MatA\n2. MatB\n3. matC\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    float res1,res2,res3;
    switch(n){
        case 1:
        if (x1==y_1){
        res1=det(arr1,x1);
        printf("Det of MatA:\t%.2f",res1);
        }
        else{
            printf("Mathematical Error");
        }
        break;
        case 2:
        if (x2==y2){
        res2=det(arr2,x2);
        printf("Det of MatB:\t%.2f",res2);
        }
        else{
            printf("Mathematical Error");
        }
        break;
        case 3:
        if (x3==y3){
            res3= det(arr3,x3);
        printf("Det of MatC:\t%.2f",res3);
        }
        else{
            printf("Mathematical Error");
        }
        break;

    }
}
    int main(){
        printf("\n");
        printf("1. Dim\n2. Edit\n3. Mat\n4. Det\n5. Trans\n6. display\n7 Cofactor \n8. Exit\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        dim();
        break;
        case 2:
        editopt();
        break;
        case 4:
        detopt();
        break;
        case 5:
        trans();
        break;
        case 6:
        display();
        break;
        case 7:
        cofactor(arr1,x1);
        case 8:
        return 0;

    }
    main();
}