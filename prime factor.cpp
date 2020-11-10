#include <iostream>
#include <math.h>
using namespace std;
void printPrimeFactors(int n) {
   for (int i = 2; i <= sqrt(n); i ++){
      while (n%i == 0){
         cout<<i<<"\t";
         n = n/i;
      }
   }
   if (n > 2)
   cout<<n<<"\t";
}
int main() {
   int n ;
   cin>>n;
   cout<<"Prime factors of "<<n<<" are :\t";
   printPrimeFactors(n);
   return 0;
}
