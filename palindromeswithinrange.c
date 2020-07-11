#include<stdio.h>
int main()
{
    int n,m,d=10,temp,max,c=0,p;
    scanf("%d%d",&n,&m);
    for (int i=1;i<m;i++)
    {
        max=max*d;
    }
    for(int i=n;i<=max-1;i++)
    {
        temp=i;
        c=0;
        while(temp>0)
        {
            p=temp%10;
            c=c*10+p;
            temp/=10;
        }
        if (c==i)
        {
            printf("%d ",c);
        }
    }
}
