#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}

