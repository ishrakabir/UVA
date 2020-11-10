
#include<stdio.h>
int main()
{
    long N,M,i,temp,dig,X;
    while(2==scanf("%ld%ld",&N,&M))
    {
        X=0;
        dig=1;
        for (i=N-M+1; i<=N; i++)
        {
            temp=i;
            while(temp%2==0)
            {
                temp=(temp>>1);
                X++;
            }
            while(temp%5==0)
            {
                temp=temp/5;
                X--;
            }
            dig=(dig*temp)%10;
        }
        for (i=1; i<=X; i++)
            dig=(dig<<1)%10;
        if (X<0)
            dig=5;
        printf("%ld\n",dig);
    }
    return 0;
}
