//infix to postfix 
//Programmer:-Priyam Katiyar
//Purpose:-Evaluation of expressions for a project (Scintific calculator)
//Data structure used:- Infix to postfix conversion
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int flag=0;
 int stack[MAX];
 char infix[MAX], postfix[MAX];
 int top=-1;
 void push(int);
 int pop();
 int isEmpty();
 void inToPost();
 int space(char);
 void print();
 int precedence(char);

 int space(char c){
    if(c==' '||c=='\t'){
        return 1;
    }
    else{
        return 0;
    }
 }
 int precedence(char symbol){
    switch(symbol){
        case '^':
        return 3;
        case '*':
        case '/':
        return 2;
        case '+':
        case '-':
        return 1;
        default:
        return 0;
    }
 }
 void print(){
    int i=0;
    printf("The equivalent postfix expression is= ");
    while (postfix[i]){
        printf("%c",postfix[i++]);
    }
    printf("\n");
}
void push(int c){
    if(top==MAX-1){
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top]=c;
}
int pop(){
    int c;
    if(top==-1){
        printf("Stack Underflow\n");
        exit(1);
    }
    c=stack[top];
    top=top-1;
    return c;
}
int isEmpty(){
    if(top==-1)
    return 1;
    else
    return 0;
}

 void inToPost(){
    int i,j=0;
    char next;
    char symbol;
    for(i=0;i<strlen(infix);i++){
        symbol=infix[i];
        //if symbol is not a whitespace or tab
        if(!space(symbol)){
            switch(symbol){
                case '(':
                push(symbol);
                break;
                case ')':
                while((next=pop())!='('){
                    postfix[j++]=next;
                }
                break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                postfix[j++]=',';
                while(!isEmpty()&&precedence(stack[top])>=precedence(symbol)){
                    postfix[j++]=pop();
                }
                push(symbol);
                break;
                default:
                postfix[j++]=symbol;
            }
        }
    }
    while(!isEmpty()){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
 }
 int pushf(int elem)
{ /* Function for PUSH operation */
  if(flag==1){
    int num;
    num=pop();
    stack[++top]=elem+10*num;
  }
  else if(flag==0){
    stack[++top]=elem;
    flag=1;
  }
}
 postEval(){
    int i;
    int a,b;
    for(i=0;i<strlen(postfix);i++){
        if(postfix[i]>='0'&&postfix[i]<='9'){
            pushf(postfix[i]-'0');
        }
        else if(postfix[i]==',')
          flag=0;
        else{
            flag=0;
            a=pop();
            b=pop();
            switch(postfix[i]){
                case'+':
                pushf(b+a);
                break;
                case'-':
                pushf(b-a);
                break;
                case'*':
                pushf(b*a);
                break;
                case'/':
                pushf(b/a);
                break;
                case'^':
                pushf(pow(b,a));
                break;
            }
        }
    }
    return pop();
 }
int main(){
    printf("Enter infix expressio: ");
    gets(infix);
    inToPost();
    int result=postEval();
    print();
    printf("The result after evaluation is %d\n",result);
    return 0;
}

