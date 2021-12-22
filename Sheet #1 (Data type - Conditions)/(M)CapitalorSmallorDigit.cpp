#include<bits/stdc++.h>
using namespace std;
int main()
{ char n;
  cin>>n;
//   cout<<n;
  if(n>=48&&n<=57)
   cout<<"IS DIGIT";
  if(n>=65&&n<=122)
  {
      cout<<"ALPHA"<<endl;
        if(n>=65&&n<=90)
          cout<<"IS CAPITAL";
        else
          cout<<"IS SMALL";
  }
 
return 0;
}
