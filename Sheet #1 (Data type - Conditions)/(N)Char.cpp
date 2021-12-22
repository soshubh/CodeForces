#include<bits/stdc++.h>
using namespace std;
int main()
{ char n;
  cin>>n;
  if(n>=65&&n<=90)
    cout<<(char)(n+32);
  if(n>=97&&n<=122){
   cout<<(char)(n-32);}
return 0;
}
