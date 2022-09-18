#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main(){
    char hexa[100];
    int sum=0,len,j=0,deci=0,decilp;
    printf("Enter hexadecimal no: ");
    scanf("%s",hexa);
    len=strlen(hexa);
    for(int i=len-1;i>=0;i--){
        if (hexa[i]=='.'){
            deci=i;
        }
    decilp=len-deci;
    }
    for(int i=decilp-1; i>=0; i--){
        if(hexa[i]>='0' && hexa[i]<='9'){
            sum=sum+(hexa[i]-48)*pow(16,j);
            j++;
        }
        else if(hexa[i]>='A' && hexa[i]<='F'){
            sum=sum+(hexa[i]-55)*pow(16,j);
            j++;
        }
    }
    printf("%d",sum);
}