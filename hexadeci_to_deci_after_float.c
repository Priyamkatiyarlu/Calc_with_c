 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
    char hexa[100];
    int len,deci=0,decilp,len1;
    printf("Enter hexadecimal no: ");
    scanf("%s",hexa);
    len=strlen(hexa);
    hexa[len]='\0';
    len1=strlen(hexa);
    for(int i=len1-2;i>=0;i--){
        if (hexa[i]=='.'){
            deci=i;
        }
    }
 int z=-1;
 int no=0;
    double sum1;
    for(int i=deci+1; i<len1; i++){
        if(hexa[i]>='0' && hexa[i]<='9'){
            no=hexa[i]-48;
            sum1=sum1+no*pow(16,z);
            printf("\nhexai 0-9 %c",hexa[i]);
            z--;
        }
        else if(hexa[i]>='A' && hexa[i]<='F'){
            no=hexa[i]-55;
            sum1=sum1+no*pow(16,z);
            printf("\nhexai a-f %c",hexa[i]);
            z--;
        }
    }
    printf("\n%lf",sum1);
}