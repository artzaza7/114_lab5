#include<stdio.h>
long long int CountUgly(long long int n);
long long int CheckUgly(long long int number);
int main()
{
    long long int num,ans;
    scanf("%lld",&num);
    ans=CountUgly(num);
    printf("%lld",ans);
    return 0;
}
long long int CountUgly(long long int n)
{
    long long i=1,count=1;
    while (n>count)
    {
        i++;
        if(CheckUgly(i))
        {
            count++;
        }
    }
    return i;
}
long long int CheckUgly(long long int number)
{
    if(number%2==0||number%3==0||number%5==0)
    {
        return 1;
    }
    else 
        return 0;
}