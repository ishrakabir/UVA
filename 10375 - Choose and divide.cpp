#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
     double p,q,r,s,sum1,sum2,i,j;
    while(cin>>p>>q>>r>>s)
    {

        if(q>p/2)
            q=p-q;
            sum1=1;
        for(i=0;i<q;i++)
            sum1=sum1*(p-i)/(i+1);

        if(s>r/2)
            s=r-s;
             sum2=1;
        for(j=0;j<s;j++)
            sum2=sum2*(r-j)/(j+1);

     double x=(double)sum1/sum2;
        printf("%.5f\n",x);
    }

}
