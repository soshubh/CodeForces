#include <bits/stdc++.h>
using namespace std;
bool PrimeFunction(int n){
    if (n == 1) {
        return false;
    }
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
    }
int main()
{ 
 int t;
 cin>>t;
 while (t--)
 {
    int n;
    cin>>n;
   PrimeFunction(n)?cout<<"YES\n":cout<<"NO\n";
 }
 
}
