// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░██████╗░██╗░░██╗░██╗░░░██╗░██████╗░░██╗░░██╗░░
// ░░██╔════╝░██║░░██║░██║░░░██║░██╔══██╗░██║░░██║░░
// ░░╚█████╗░░███████║░██║░░░██║░██████╦╝░███████║░░
// ░░░╚═══██╗░██╔══██║░██║░░░██║░██╔══██╗░██╔══██║░░
// ░░██████╔╝░██║░░██║░╚██████╔╝░██████╦╝░██║░░██║░░
// ░░╚═════╝░░╚═╝░░╚═╝░░╚═════╝░░╚═════╝░░╚═╝░░╚═╝░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str="qwertyuiopasdfghjkl;zxcvbnm,./";
  char c;
  cin>>c;
  string s;
  cin>>s;
  int l=s.size();
  // cout<<l<<"\n";
  if(c=='L')
  {
    for(int i=0;i<l;i++)
    {
      for(int j=0;j<30;j++)
       if (str[j]==s[i])
        {
         cout<<str[j+1];
         continue;
        }
    }
  }
  else  if(c=='R')
  {
    for(int i=0;i<l;i++)
    {
      for(int j=0;j<30;j++)
       if (str[j]==s[i])
        {
         cout<<str[j-1];
         continue;
        }
    }
  }
}
