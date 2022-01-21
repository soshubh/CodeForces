#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c=1;
  cin>>a>>b;
  for(int i=1;i<=a;i++)
   {
     for(int j=1;j<=b;j++)
     {
      if(c%4==0&&j==1)
       cout<<"#";
      else if(i%2!=0||(j==b&&i%2==0&&c%4!=0))
       cout<<"#";
      else if(i%2==0)
       cout<<"."; 
     }
     ++c;
     cout<<endl;
   }
}
