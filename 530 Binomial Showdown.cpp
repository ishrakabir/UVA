#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    while(1)
    {
        long double sum =1;
        cin>>n>>k;
        if(n==0&&k==0)
            break;
        if(k>n/2)
            k=n-k;

        for(int i=0; i<k; i++)
        {
            sum=sum*(n-i)/(i+1);
        }
        cout<<sum<<endl;
    }

}

