#include<bits/stdc++.h>

using namespace std;
int main()
{ int a,b,r;
  char op,eq;
  cin>>a>>op>>b>>eq>>r;
  switch (op)
  {
  case '+':
      if((a+b)==r)
        cout<<"Yes";
      else
        cout<<(a+b);
      break;
  case '-':
      if(r==(a-b))
        cout<<"Yes";
      else
        cout<<(a-b);
      break;
  case '*':
      if(r==(a*b))
        cout<<"Yes";
      else
        cout<<a*b;
      break;    
  }
 
    
return 0;
}
