#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long p=(((sqrt(5)-1)*pow(((1+sqrt(5))/2),n))+((sqrt(5)+1)*pow(((1-sqrt(5))/2),n)))/(sqrt(5)*2);
    cout<<p;
    return 0;
}
