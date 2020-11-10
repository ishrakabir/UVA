
#include <bits/stdc++.h>




#define ll long long
using namespace std;

ll LCM(ll x, ll y){ return x * (y/__gcd(x,y)); }

int main(){
  ll n;
  while(scanf("%lld",&n) == 1){
    ll ans = 1;
    printf("%5lld -> ", n);
    for(ll i = 1; i <= n; i++){
      ans = ans * i;
      while(1){
        if(ans % 10){
          ans = ans % 1000000;
          break;
        }
        else
          ans = ans / 10;
      }
    }

    cout << ans%10 << endl;
  }
}
