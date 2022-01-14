#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
int main(){
 lb x1,y1,x2,y2;
 cin>>x1>>y1>>x2>>y2;
 lb distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
 cout<<fixed<<setprecision(9)<<distance;
return 0;
} 
