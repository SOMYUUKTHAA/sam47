#include<stdio.h>
void main()
{
    int a[100],n,i,j;
    printf("ENTER THE VALUE OF n :\t");
    scanf("%d",&n);
    if(n<=10000)
    {
    printf("\nENTER THE VALUES OF a :\t");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    if(n==a[i])
    printf("yes");
    }
    }
    
}
