#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}

