#include<stdio.h>
void display(int x, int y, int(*array)[y]){
    int i=0;
    int j=0;
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d\t",*(*(array+i)+j));
        }
        printf("\n");
        }
}
int main(){
    int x,y;
    printf("Enter rows: ");
    scanf("%d",&x);
    printf("Enter columns: ");
    scanf("%d",&y);
    int arr[x][y];
        for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        printf("MatA[%d][%d]:\t",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    display(x,y,arr);
}