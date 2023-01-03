#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
    return 0;
}

