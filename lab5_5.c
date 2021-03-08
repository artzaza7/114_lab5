#include<stdio.h>
int main()
{
    int N;//size of Array
    scanf("%d",&N);
    int A[N][N];
    int M;//size of small Array
    scanf("%d",&M);
    int sum=0;
    int check[(N-M+1)][(N-M+1)];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<N-M+1;i++)
    {
        for(int j=0;j<N-M+1;j++)
        {
            sum=0;
            for(int h=i;h<M+i;h++)
            {
                for(int t=j;t<M+j;t++)
                {
                    sum=sum+A[h][t];
                }
            }
            check[i][j]=sum;
        }
    }
    int ans=check[0][0];
    for(int q=0;q<(N-M+1);q++)
    {
        for(int u=0;u<N-M+1;u++)
        {
            if(ans<check[q][u])
                ans=check[q][u];
        }
    }
    printf("%d",ans);
    return 0;
}