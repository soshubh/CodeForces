#include<bits/stdc++.h>
using namespace std;
int main()
{ int a,b;
  cin>>a>>b;
  double r= (float)a/b;
   cout<<"floor "<<a<<" / "<<b<<" = "<<floor(r)<<endl;
   cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(r)<<endl;
   cout<<"round "<<a<<" / "<<b<<" = "<<round(r);
   
return 0;
}
 
