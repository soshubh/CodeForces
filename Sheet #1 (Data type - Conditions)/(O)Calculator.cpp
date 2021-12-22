#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int a, b, r;
char op;
  cin>>a>>op>>b;
  switch (op)
  {
  case('+'):
     cout<<a+b;
      break;
  case('-'):
     cout<<a-b;
      break;
  case('*'):
     cout<<a*b;
      break;
  case('/'):
     cout<<a/b;
      break;         
  }
return 0;
}
