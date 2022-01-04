#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n;
  m=n/2;
  for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     { if(n%2==0){
       if(i==j)
        cout<<"\\";
       else if(i+j==(n-1))
        cout<<"/";
        else
         cout<<"*";}
       else{
        if(i==m&&j==m)
         cout<<"X";
        else if(i==j)
        cout<<"\\";
       else if(i+j==(n-1))
        cout<<"/";
        else
         cout<<"*";
       }  
     }
     cout<<endl;
   }
}  
