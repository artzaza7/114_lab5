#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    long long int i=1,number=2,make[10000000000]={0};
    if(num==1)
    {
        printf("1");
    }
    else{
    while(number<=10000000000)
    {
        if(number%2==0||number%3==0||number%5==0)
            make[i]=number;
        else
        {
            i--;
        }
        i++;
        number++;
    }
    printf("%lld",make[num-1]);
    }
    return 0;
}