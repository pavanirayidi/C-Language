#include<stdio.h>
int main()
{
    int i,n,m,temp,temp1,max=1,c,p,q,k,sum=0;
    scanf("%d%d",&n,&m);
    for (i=1;i<=m;i++)
    {
        max=max*10;
    }
    for(i=n;i<=max-1;i++)
    {
    	sum=0;
        temp=i;
        temp1=i;
        c=0;
        while(temp!=0)
        {
            temp/=10;
            c++;
        }
        while(temp1!=0)
        {
        	p=1;
            q=temp1%10;
            for(k=0;k<c;k++)
            {
                p=p*q;
            }
            sum=sum+p;
            temp1/=10;
        }
        if (sum==i)
        {
            printf("%d ",sum);
        }
    }
}
