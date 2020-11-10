#include<bits/stdc++.h>
#include<cmath>
#include <algorithm>
#define t 1000010
using namespace std;
int a[t];


int main()
{
     int i,j,x,y,z,n,cnt,r,tempX,tempY,tempZ;
     double sq,p;
     while(cin>>n)
     {
sq=sqrt(n);
         if(sq*sq<n)
         sq++;
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }
    cnt=0;
    r=0;
    for(i=1;i<=sq;i++)
    {
        for(j=i+1;j<=sq;j++)
        {
            if(__gcd(i,j)==1)
            {
                x=j*j-i*i;
                y=2*j*i;
                z=j*j+i*i;
                if(z>n)
                    break;
                     if(__gcd(__gcd(x,y),z)==1)
                    cnt++;

                tempX=x;
                tempY=y;
                tempZ=z;

                while(tempZ<=n)
                {

                    a[tempX]=a[tempY]=a[tempZ]=1;
                    tempX+=x;
                    tempY+=y;
                    tempZ+=z;

                }

            }

        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i])
            r++;

    }
    cout<<cnt<<" "<<n-r<<endl;
}

}
