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
#include<bits/stdc++.h>
using namespace std;
typedef long long l;
int main(){
 l n,r;
 cin>>n>>r;
 l fn=1,fr=1,fnr=1;
 for(int i=1;i<=n;i++)
   fn*=i;
 for(int i=1;i<=r;i++)
   fr*=i;
 for(int i=1;i<=(n-r);i++)
   fnr*=i;
 
 cout<<(fn/(fr*fnr))<<" "<<(fn/fnr);  
}
