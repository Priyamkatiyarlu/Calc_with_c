#include<stdio.h>
#include<stdlib.h>
int rr(int *p,int n,int *c)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if (*(p+i)==*(p+j))
            {
                for(k=j;k<n;k++)
            {

                *(p+k)=*(p+k+1);
            }j--;
            n--;
        }
        }
    }
    *c=n;
    return p;
}
int inter(int *p,int*q,int m,int n)
{   int i,j;
    printf("Intersection of two set is as follows:\n");
    if ((n>m) || (m==n))
    {
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

        {

            if (*(p+i)==*(q+j))

            {

                printf("\n%d",*(q+j));

            }

        }

    }
    }
    else
    {


         for(i=0;i<m;i++)

    {

        for(j=0;j<n;j++)

        {

            if (*(q+i)==*(p+j))

            {

                printf("\n%d",*(p+j));}}}

    }return 0;

    }
    int unio(int *p,int*q,int n,int m)

{
    printf("Union of two set is as follows:\n");
    int s=m+n;
    int *r=(int*)malloc(s*sizeof(int));
    int i,j=0;
    for(i=0;i<n;i++)
    {
        *(r+j)=*(p+i);
        j++;
    }
    for(i=0;i<m;i++)
    {
        *(r+j)=*(q+i);
        j++;
    }
    r=rr(r,s,&s);
    for(i=0;i<s;i++)
    {
        printf("%d\n",*(r+i));
    }

    return r;
}
int diff(int *p,int*q,int n,int m)
{
    int i,j;
    int *r=(int*)malloc(n*sizeof(int));
    int k=0;
    for(i=0;i<n;i++)
    {
        int t=0;
        for(j=0;j<m;j++)
        {
            if(*(p+i)==*(q+j))
            {
                t=1;
                break;
            }
        }
        if(t==0)
        {
            *(r+k)=*(p+i);
            k++;
        }
    }
    printf("\nDiffereeence is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",*(r+i));
    }
    return 0;
}
int symdiff(int *p,int*q,int n,int m)
{
    int max=(n>m)?n:m;
    int *r=(int*)malloc(max*sizeof(int));
    int *s=(int*)malloc(max*sizeof(int));
    int k=0,j,i;
    for(i=0;i<n;i++)
    {
        int t=0;
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(q+j))
            {
                t=1;
                break;
            }
        }
    if(t==0)
    {
        *(r+k)=*(p+i);
        k++;
    }}
    int l=0;
    for(i=0;i<m;i++)
    {
        int t=0;
        for(j=0;j<m;j++)
        {
            if(*(q+i)==*(p+j))
            {
                t=1;
                break;
            }
        }
    if(t==0)
    {
        *(s+l)=*(q+i);
         l++;
    }}
    for(i=0;i<k;i++)
    {
        int t=0;
        for(j=0;j<l;j++)
        {
            if(*(r+i)==*(s+j))
            {
                t=1;
            }
        }
    if(t==0)
    {
        *(s+l)=*(r+i);
         l++;
    }}
    printf("\nSymmetric Difference Is:\n");
    for(i=0;i<l;i++)
    {
        printf("%d\n",*(s+i));
    }
    return 0;
}
int cartpr(int*p,int*q,int n,int m)
{
    printf("\nCARTESIAN PRODUCT IS AS FOLLOWS:\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("{%d %d},",*(p+i),*(q+j));
        }
    }
}
int main()
{
    int n,m,i,j,s,ch;
    printf("Enter no of elements of first set:");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    printf("Enter no of elements of second set:");
    scanf("%d",&m);
    int *q=(int*)malloc(m*sizeof(int));
    printf("\nEnter First set element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nEnter Second set element:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",q+i);
    }
    p=rr(p,n,&n);
    q=rr(q,m,&m);
    printf("\nWhich Operation you want to perdorm\n");
    printf("\n1.INTERSECTION\n");
    printf("\n2.UNION\n");
    printf("\n3.DIFFERENCE\n");
    printf("\n4.SYMMETRIC DIFFERENCE\n");
    printf("\n5.CARTESIAN PRODUCT\n");
    scanf("%d",&ch);
    if(ch==1)
            inter(p,q,n,m);
    else if(ch==2)
            unio(p,q,n,m);
    else if(ch==3)
            diff(p,q,n,m);
    else if(ch==4)
            symdiff(p,q,n,m);
    else if(ch==5)
            cartpr(p,q,n,m);
    else
            printf("\nWRONG CHOICE!\n");

    return 0;
}

