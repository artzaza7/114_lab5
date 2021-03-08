#include<stdio.h>
long long int CountUgly(long long int n);
long long int CheckUgly(long long int number);
long long int MaxDivide(long long int a ,long long int b);
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
long long int maxDivide(long long int a, long long int b)
{
    while (a%b==0)
        a=a/b;
    return a;
}
long long int CheckUgly(long long int number)
{
    number=maxDivide(number,2);
    number=maxDivide(number,3);
    number=maxDivide(number,5);
    if(number==1)
    {
        return 1;
    }
    else 
        return 0;
}