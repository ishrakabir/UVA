#include <bits/stdc++.h>
using namespace std;
int main()
{
    int K,M,n;
    cin>>n;
    while(n--)
    {
       cin>>M>>K;
        if(K%M)

            cout<<"-1"<<endl;
        else

            cout<<M<<" "<<K<<endl;
    }
    return 0;
}
