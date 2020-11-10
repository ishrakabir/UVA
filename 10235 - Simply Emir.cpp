#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    long long i,p,x=n;
    long long n1 = 0, r;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }


        if(prime[n]==false)
            cout<<x<<" is not prime."<<endl;
        else
            {


    while(n != 0) {
        r = n%10;
        n1 = n1*10 + r;
        n /= 10;
    }
bool prime[n1+1];
    memset(prime,true,sizeof(prime));
    for(p=2;p*p<=n1;p++)
    {
        if(prime[p]==true)
        {
            for(i=p*p;i<=n1;i+=p)
                prime[i]=false;
        }
    }
    if(prime[n1]&&prime[n])
        cout<<x<<" is emirp."<<endl;
    else
        cout<<x<<" is prime."<<endl;
            }
}


int main()
{
    long long n;
    while(1)
    {
        cin>>n;
    sieve(n);

    }
}
