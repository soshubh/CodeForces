//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
//░░░██████╗░██╗░░██╗░██╗░░░██╗░██████╗░░██╗░░██╗░░
//░░██╔════╝░██║░░██║░██║░░░██║░██╔══██╗░██║░░██║░░
//░░╚█████╗░░███████║░██║░░░██║░██████╦╝░███████║░░
//░░░╚═══██╗░██╔══██║░██║░░░██║░██╔══██╗░██╔══██║░░
//░░██████╔╝░██║░░██║░╚██████╔╝░██████╦╝░██║░░██║░░
//░░╚═════╝░░╚═╝░░╚═╝░░╚═════╝░░╚═════╝░░╚═╝░░╚═╝░░
//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
  char a[100005],b[100005];
   cin>>a>>b;
  if(strcmp(a,b)==0)
   cout<<"-1\n";
  else 
   cout<<max(strlen(a),strlen(b))<<"\n";
  return 0;  
}
