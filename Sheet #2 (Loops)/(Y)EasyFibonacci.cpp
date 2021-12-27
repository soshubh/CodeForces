#include <bits/stdc++.h>
using namespace std;
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n,c=3;
  cin>>n;
  nextTerm = t1 + t2;
  if(n==1)
  cout<<t1;
  else if(n>=2)
  cout<<t1<<" "<<t2<<" ";
  
 
  while (c <= n) {
   cout<<nextTerm<<" ";
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    c++;
  }
 
  return 0;
}
