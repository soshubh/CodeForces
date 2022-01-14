#include <bits/stdc++.h>
using namespace std;
 typedef long long int l;
int main(){
 l x,y,r;
 cin>>x>>y>>r;
 l t;
 cin>>t;
//  cout<<r*r<<"    ";
 while (t--)
 {
   l x1,y1;
   cin>>x1>>y1;
    
    // cout<<ans<<endl;
   if( pow((x1-x),2)+pow((y1-y),2)-(r*r) >0 )
    cout<<"NO";
   else
   cout<<"YES";

  cout<<endl;   
 }
return 0;
} 
