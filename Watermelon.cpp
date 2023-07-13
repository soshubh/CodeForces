//soshubh

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int w,f=0;
 cin>>w;
  for(int i=2;i<w;i+=2)
   for(int j=2;j<w;j+=2)
   {
       if(i+j==w){
         f=1;
         break;
       }
   }
  if(f==1)
   cout<<"YES";
  else
    cout<<"NO"; 
 return 0; 
}
