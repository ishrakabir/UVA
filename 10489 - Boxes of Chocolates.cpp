
#include <stdio.h>
int main()
{
    int M,N,B,t,F,CB,X;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&F,&B);
        M = 0;
        while(B--)
        {
            N = 1;
            scanf("%d",&CB);
            while(CB--)
            {
                scanf("%d",&X);
                N = (N*X)%F;
            }
            M = (M + N)%F;
        }
        printf("%d\n",M);
    }
    return 0;
}
