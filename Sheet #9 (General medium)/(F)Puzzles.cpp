// ░██████╗██╗░░██╗██╗░░░██╗██████╗░██╗░░██╗
// ██╔════╝██║░░██║██║░░░██║██╔══██╗██║░░██║
// ╚█████╗░███████║██║░░░██║██████╦╝███████║
// ░╚═══██╗██╔══██║██║░░░██║██╔══██╗██╔══██║
// ██████╔╝██║░░██║╚██████╔╝██████╦╝██║░░██║
// ╚═════╝░╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝
 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,c=10001;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    
    sort(a,a+m);
    for (int j=0;j<=m-n;j++)
        c=min(c,abs(a[j+n-1]-a[j]));
    cout<<c;
  return 0;
}
