#include<stdio.h>
int main()
{
long long int i,x[14],y[14],S,a,b,j;
for(i=0,j=0;;i++,j++)
{
scanf("%lld",&S);
if(S<0)
break;
else
{
for(i=0;i<12;i++)
scanf("%lld",&x[i]);
for(i=0;i<12;i++)
scanf("%lld",&y[i]);
printf("Case %d:\n",j+1);
for(i=0;i<12;i++)
{
if(x[i]>=y[i])

printf("No problem! :D\n");
else
printf("No problem. :(\n");
}
}
}
}
