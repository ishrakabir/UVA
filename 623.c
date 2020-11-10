#include <stdio.h>
int main()
{
    int a[10000];
    int n,b,c,d,i,j;
    while(scanf("%d", &n)==1)
    {
        a[0]=1;
        d=1;
        b=0;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<d; j++)
            {
                c=a[j]*i+b;
                a[j]=c%10;
                b=c/10;
            }
            while(b>0)
            {
                a[d]=b%10;
                b=b/10;
                d++;
            }
        }
        a[d]='\0';
        printf("%d!\n", n);
        for(j=d-1; j>=0; j--)
        {
            printf("%d", a[j]);
        }
        printf("\n");
    }
    return 0;
}
