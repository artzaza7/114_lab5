#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i=0,number=1,make[1000]={0};
    if(num==1)
    {
        printf("1");
    }
    else{
    while(number<=1000)
    {
        if(number%2==0||number%3==0||number%5==0)
            make[i]=number;
        i++;
        number++;
    }
    printf("%d",make[num]);
    }
    return 0;
}