#include<bits/stdc++.h>
using namespace std;
void print(int N)
{
    int r;
    if (N<=0) {
        return;
    }
   r=N%10;
    print(N/10);
    cout<<r<<" ";
}
  
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n; 
    if(n!=0)    
    print(n);
    if(n==0)
    cout<<"0";
    cout<<endl;
    }
    return 0;
}
