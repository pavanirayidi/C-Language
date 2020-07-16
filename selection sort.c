#include<stdio.h>
int main()
{
    int a[10],i,j,n,small,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if (a[small]>a[j])
            {
                small=j;
            }
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
