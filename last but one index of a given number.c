/*Find the second last index occurrence of a number in list of elements and if the given number does not occur twice, display -1.*/


#include<stdio.h>
int main()
{
    int a[10],n,key,i,count=0;
    scanf("%d",&n);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>=0;i--)
    {

        if (a[i]==key)
        {
            count++;
            //printf(" i =%d\n",i);
            if (count==2)
            {
                break;
            }
        }
    }
    //printf("count is %d\n",count);
    if(count==2)
    {
        printf("index is %d\n",i+1);
    }
    else
    {
        //printf("%d \n",count);
        printf("-1");
    }

    return 0;
}
