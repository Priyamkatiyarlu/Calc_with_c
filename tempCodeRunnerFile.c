#include <stdio.h>
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter no of rows=");
    scanf("%d",&x);
    printf("Enter no of columns=");
    scanf("%d",&y);
    int arr[x][y];
    int res[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
        printf("Enter arr[%d][%d] element of first array=",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0; j<y; j++){
                res[j][i]=arr[i][j];
            }
        }
    for(int i=0; i<x; i++){
        printf("\n");
        for(int j=0; j<y; j++)
        printf("%d\t",res[i][j]);
        }
        }