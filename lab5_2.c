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
            for(int k=1;k<=(i-1)*2-1;k++)
            {
                printf("_");
            }
            if(i!=1)
                printf("*");
            printf("\n");
        }
    return 0;
}