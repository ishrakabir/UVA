#include<iostream>
using namespace std;
int main()
{
    int t,N,i,a[10],j,x;
    cin>>t;
    while(t--)
    {

        for(i=0;i<10;i++)
        {
            a[i]=0;
        }
        cin>>N;
        for(i=1;i<=N;i++)
        {
            j=i;
            while(j!=0)
            {
                x=j%10;
                a[x]++;
                j=j/10;
            }
        }
        for(i=0;i<9;i++)
            cout<<a[i]<<" ";
            cout<<a[9]<<endl;

}
}
