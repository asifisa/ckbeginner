#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
