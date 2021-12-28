#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c,d;
  cin>>a>>b>>c>>d;
  long long int r[6];
  r[0]=a+b-c;
  r[1]=a-b+c;
  r[2]=a+b*c;
  r[3]=a*b+c;
  r[4]=a-b*c;
  r[5]=a*b-c;
  if(r[0]==d||r[1]==d||r[2]==d||r[3]==d||r[4]==d||r[5]==d)
    cout<<"YES";
  else
    cout<<"NO";  
return 0;
}
