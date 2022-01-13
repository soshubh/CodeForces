#include <bits/stdc++.h>
using namespace std;
int main(){
 double r,l;
 cin>>r>>l;
 
 if(2*r<=l)
  cout<<"Square";
 else if(l*sqrt(2)<=(r*2))
  cout<<"Circle";
 else
  cout<<"Complex"; 
return 0;
} 
