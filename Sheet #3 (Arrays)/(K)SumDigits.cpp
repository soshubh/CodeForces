#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char num[n];
  cin>>num;
  long long int sum=0;
  vector<int> a(10,0);
  for(int i=0;i<n;i++)
  {int m=0;
    for(int j=48;j<=57;j++){
     if((int)num[i]==j)
         a[m]++;
      m++;   }
  } 
  for(int i=0;i<10;i++)
   sum=sum+a[i]*i;
	cout<<sum;
  return 0;
}
