#include<stdio.h>
int main()
{
    int a[20][20],w, i,j,n,m,x;
    scanf("%d",&n);
    for(w=0;w<n;w++);
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n ");
        }
    }
}
