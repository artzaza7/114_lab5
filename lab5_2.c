#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2!=0)
    {

    }
        for(int i=1;i<=num/2;i++)
        {
            for(int j=num/2-i;j>0;j--)
            {
                printf("_");
            }
            printf("*");
            printf("\n");
        }
    return 0;
}