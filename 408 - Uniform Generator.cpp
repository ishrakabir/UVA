#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       printf("%10d%10d    %s Choice\n\n",a,b,(__gcd(a,b)==1)?"Good":"Bad");
    }


}

