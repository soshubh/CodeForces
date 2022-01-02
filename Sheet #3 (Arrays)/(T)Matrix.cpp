#include <bits/stdc++.h>
using namespace std;
int main()
{  int n;
  cin>>n;
  int matrix[n][n];
  long long sum_left =0, sum_right = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
      if((i+j) == n-1)
        sum_right += matrix[i][j];
    }
  }
   long long r=sum_left-sum_right;
   if(r<0)
    cout<<-r;
   else
   cout<<r;
 
  return 0;
}
