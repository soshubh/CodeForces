#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double X[2],Y[2];
    X[0]=x2-x1;
    X[1]=x3-x2;
    Y[0]=y2-y1;
    Y[1]=y3-y2;
    // cout<<X[0]<<" "<<X[1]<<" "<<Y[0]<<" "<<Y[1]<<endl;
    double a[2];
      if(X[0]!=0&&X[1]!=0&&Y[0]!=0&&Y[1]!=0)
        {
            a[0]=X[0]/Y[0];
            a[1]=X[1]/Y[1];
            // cout<<a[0]<<" "<<a[1];
           if(a[0]==a[1])
             cout<<"YES";
           else
             cout<<"NO"; 
        }
      else if((X[0]==0&&X[1]==0)||(Y[0]==0&&Y[1]==0)||(X[0]==0&&Y[0]==0)||(X[1]==0&&Y[1]==0))
        {
            cout<<"YES";
        }
     else 
       cout<<"NO";   
}
