#include<stdio.h>
int main()
{
long int n,k,r,get;
while(scanf("%ld%ld",&n,&k)!=EOF)
{
r=0;
r=n+n/k;
get=n/k+n%k;
while(get>=k)
{
r=r+get/k;
get=get/k+get%k;
}
printf("%ld\n",r);
}
return 0;
}
