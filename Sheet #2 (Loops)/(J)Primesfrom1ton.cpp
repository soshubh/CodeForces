#include <iostream>  
using namespace std;  
int main()  
{  
  int n,c;
  cin>>n;
 
  for(int j=2;j<=n;j++)
  {c=-1;
    for(int i=2;i<j;i++)
    {
      if(j%i==0){
       c=0;}
     }
    if(c!=0)
    cout<<j<<" "; 
  }
  return 0;  
}  
