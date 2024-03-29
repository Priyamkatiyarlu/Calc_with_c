#include<stdio.h>
#include<math.h>
#define SIZE 100
int x1,y_1,x2,y2,x3,y3;
float arr1[SIZE][SIZE];
float arr2[SIZE][SIZE];
float arr3[SIZE][SIZE];
float res[SIZE][SIZE];
float tran[SIZE][SIZE];
float fac[SIZE][SIZE];
float det(float A[SIZE][SIZE], int n)
{
    float Minor[SIZE][SIZE];
    int i,j,k,c1,c2;
    float determinant;
    float c[SIZE];
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
float inv(float num[SIZE][SIZE], float b[SIZE][SIZE], int r){
    float inverse[SIZE][SIZE], d;
    int i, j;
  d = det(num,r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / d;
        }
    }
   printf("\n\n\n\t\t\tThe inverse of matrix is : \t\t\t\n");
 
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t\t%.3f", inverse[i][j]);
        }
    printf("\n");
     }
}
void cofactor(float num[SIZE][SIZE], float f)
{
 float b[100][100];
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
}
void printresult(int x,int y,float arr[SIZE][SIZE]){
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
   void matrixinput(int x,int y,float arr[SIZE][SIZE]){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%f",&arr[i][j]);
        }
    }
    }
    int edit(int *x,int *y, float arr[SIZE][SIZE]){
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
    int display(){
        printf("1. Display MatA\n2. Display MatB\n3.Display MatC\n4. Exit to main menu.\n5. Exit from program.\n");
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
        case 4:
        main();
        break;
        case 5:
        return 0;

    }
    }
    int transmat(int x, int y,float array[SIZE][SIZE]){
    float res[x][y];
     for(int i=0;i<x;i++){
        for(int j=0; j<y; j++){
                tran[j][i]=array[i][j];
            }
        }
        }
    int trans(){
        printf("1. MatA\n2. MatB\n3. matC\n4. Exit to main menu.\n5. Exit from program.\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        transmat(x1,y_1,arr1);
        printresult(y_1,x1,tran);
        break;
        case 2:
        transmat(x2,y2,arr2);
        printresult(y2,x2,tran);
        break;
        case 3:
        transmat(x3,y3,arr3);
        printresult(y3,x3,tran);
        break;
        case 4:
        main();
        break;
        case 5:
        return 0;;

    }
} 
int detopt(){
    printf("1. MatA\n2. MatB\n3. matC\n4. Exit to main menu.\n5. Exit from program.\n");
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
        case 4:
        main();
        break;
        case 5:
        return 0;

    }
}
    int invcall(){
    printf("1. MatA\n2. MatB\n3. matC\n4. Exit to main menu.\n5. Exit from program.\n");
        int n;
        float d;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        if (x1==y_1){
          d = det(arr1,x1);
        if (d == 0){
        printf("\nInverse of Entered Matrix is not possible\n");
        }
        else{
        cofactor(arr1,x1);
        transmat(x1,y_1,fac);
        inv(arr1,tran,x1);
        }
        }
        else{
            printf("Mathematical Error");
        }
        break;
        case 2:
        if (x2==y2){
        d = det(arr2,x2);
        if (d == 0){
        printf("\nInverse of Entered Matrix is not possible\n");
        }
        else{
        cofactor(arr2,x2);
        transmat(x2,y2,fac);
        inv(arr2,tran,x2);
        }
        }
        else{
            printf("Mathematical Error");
        }
        break;
        case 3:
        if (x3==y3){
        d = det(arr3,x3);
        if (d == 0){
        printf("\nInverse of Entered Matrix is not possible\n");
        }
        else{
        cofactor(arr3,x3);
        transmat(x3,y3,fac);
        inv(arr3,tran,x3);
        }
        }
        else{
            printf("Mathematical Error");
        }
        break;
        case 4:
        main();
        break;
        case 5:
        return 0;

    }
    }
    int cofactoropt(){
        printf("1. MatA\n2. MatB\n3. matC\n4. Exit to main menu.\n5. Exit from program.\n");
        int n;
    printf("\nEnter your choice:\t");
    scanf("%d",&n);
    switch(n){
        case 1:
        if (x1==y_1){
        cofactor(arr1,x1);
        printf("\n\n\t\tCofactor of matrix\t\t\n\n");
        printresult(x1,y_1,fac);
        printf("\n\n");
        }
        else{
            printf("\n\t\tMathematical error.\t\t\n");
        }
        break;
        case 2:
        if (x2==y2){
        cofactor(arr2,x2);
        printf("\n\n\t\tCofactor of matrix\t\t\n\n");
        printresult(x2,y2,fac);
        printf("\n\n");
        }
        else{
            printf("\n\t\tMathematical error.\t\t\n");
        }
        break;
        case 3:
        if (x3==y3){
        cofactor(arr3,x3);
        printf("\n\n\t\tCofactor of matrix\t\t\n\n");
        printresult(x3,y3,fac);
        printf("\n\n");
        }
        else{
            printf("\n\t\tMathematical error.\t\t\n");
        }
        break;
        case 4:
        main();
        break;
        case 5:
        return 0;

    }
}
    int main(){
        printf("\n");
        printf("1. Dim\n2. Edit\n3. Mat\n4. Det\n5. Trans\n6. display\n7. Cofactor \n8. Inverse\n9. Exit\n");
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
        cofactoropt();
        case 8:
        invcall();
        case 9:
        return 0;

    }
    main();
}