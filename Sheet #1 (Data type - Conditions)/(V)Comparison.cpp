#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b;
  char op;
  cin>>a>>op>>b;
  switch (op)
  {
  case '>':
      if(a>b)
        cout<<"Right";
      else
        cout<<"Wrong";
      break;
  case '<':
      if(a<b)
        cout<<"Right";
      else
        cout<<"Wrong";
      break;
  case '=':
      if(a==b)
        cout<<"Right";
      else
        cout<<"Wrong";
      break;    
  }
 
    
return 0;
}
