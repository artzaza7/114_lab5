#include<stdio.h>
int main()
{
    int num,check=0;
    scanf("%d",&num);
    int save=num/2;
    if(num%2!=0)
    {
        num++;
        check++;
    }
        if(check!=0)
        {
            save=(num-1)/2;
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
            for(int h=1;h<=num/2-i;h++)
            {
                printf("_");
            }
            printf("\n");
            
        }
        for(int i=save;i>=1;i--)
        {
            for(int j=1;j<=num/2-i;j++)
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
            for(int h=1;h<=num/2-i;h++)
            {
                printf("_");
            }
            printf("\n");
        }
    return 0;
}