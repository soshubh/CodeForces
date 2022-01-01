#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  long long int n=a+b+1,c=0;
  char code[n];
  cin>>code;
  for(int i=0;i<n;i++)
  if(code[i]>=47&&code[i]<58)
    c++;
  if(c==(n-1)&&code[a]=='-')
   cout<<"Yes";
  else
   cout<<"No";
    return 0;
}
