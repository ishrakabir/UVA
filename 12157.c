#include<stdio.h>
int main()
{
int i,x,y,m,n,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
m=0;
j=0;
scanf("%d",&x);
for(k=0;k<x;k++)
{
scanf("%d",&y);
m+=((y/30)+1)*10;
j+=((y/60)+1)*15;
}
if(m<j)
{
printf("Case %d: Mile %d\n",i+1,m);
}
else if(j<m)
{

printf("Case %d: Juice %d\n",i+1,j);

}
else
{

printf("Case %d: Mile Juice %d\n",i+1,m);

}
}
return 0;
}
