// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░╔═╗░╔═╦╗░░╔╗╔╗░░░░░░░░░░░░░
// ░░░░░░░░░░░║═╬═╣═╣╚╦╦╣╚╣╚╗░░░░░░░░░░░░
// ░░░░░░░░░░░╠═║╬╠═║║║║║╬║║║░░░░░░░░░░░░
// ░░░░░░░░░░░╚═╩═╩═╩╩╩═╩═╩╩╝░░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░╔═══╗╔═══╗╔═══╗╔═══╗░░░░░░░░░░
// ░░░░░░░░║╔═╗║║╔═╗║╚╗╔╗║║╔══╝░░░░░░░░░░
// ░░░░░░░░║║░╚╝║║░║║░║║║║║╚══╗░░░░░░░░░░
// ░░░░░░░░║║░╔╗║║░║║░║║║║║╔══╝░░░░░░░░░░
// ░░░░░░░░║╚═╝║║╚═╝║╔╝╚╝║║╚══╗░░░░░░░░░░
// ░░░░░░░░╚═══╝╚═══╝╚═══╝╚═══╝░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int t,c;
  cin>>t;
  while (t--)
  {
     int n,c=0,sum=0;
     cin>>n;
     while(n>0)
     { if(n%2==1)
         c++;
       n=n/2;
     }
    //  vector<int> a(c,1);
     for(int i=0;i<c;i++)
     {
      sum=sum+pow(2,i);
     }
     cout<<sum<<"\n";
  }  
}
