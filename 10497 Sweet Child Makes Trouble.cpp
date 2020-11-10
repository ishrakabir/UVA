#include<bits/stdc++.h>

using namespace std;
int main()
{
     int n;

    while(cin>>n&&n!=-1)
    {
 long long int fib1=0,fib2=1,fibo,i,sum=1;


    for(i=2;i<n;i++)
    {

        fibo=fib1+fib2;
        sum+=fibo;
        fib1=fib2;
        fib2=fibo;



    } cout<<sum<<" "<<endl;
    }

}
