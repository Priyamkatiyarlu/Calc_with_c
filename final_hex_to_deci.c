 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
double hex_after_float(char hexa[100]){
    int len,deci=0,decilp,len1;
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
            z--;
            
        }
        else if(hexa[i]>='A' && hexa[i]<='F'){
            no=hexa[i]-55;
            sum1=sum1+no*pow(16,z);
            z--;
        }
    }
    printf("\n%0.18lf",sum1);
    return sum1;
}
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
    double result;
    if(deci!=0){
        result=sum+hex_after_float(hexa);
    }
    printf("\n%0.18lf",result);
}