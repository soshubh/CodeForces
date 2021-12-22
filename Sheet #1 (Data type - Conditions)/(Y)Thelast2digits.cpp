#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,r;
    cin>>a>>b>>c>>d;
    a=a%100;b=b%100;c=c%100;d=d%100;
    r=a*b*c*d%100;
    // if(r==0)
    //  cout<<"00";
    if(r>=0&&r<10)
      cout<<"0"<<r;
    else
     cout<<r; 
return 0;
}
