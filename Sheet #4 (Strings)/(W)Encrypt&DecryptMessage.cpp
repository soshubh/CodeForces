//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
//░░░██████╗░██╗░░██╗░██╗░░░██╗░██████╗░░██╗░░██╗░░
//░░██╔════╝░██║░░██║░██║░░░██║░██╔══██╗░██║░░██║░░
//░░╚█████╗░░███████║░██║░░░██║░██████╦╝░███████║░░
//░░░╚═══██╗░██╔══██║░██║░░░██║░██╔══██╗░██╔══██║░░
//░░██████╔╝░██║░░██║░╚██████╔╝░██████╦╝░██║░░██║░░
//░░╚═════╝░░╚═╝░░╚═╝░░╚═════╝░░╚═════╝░░╚═╝░░╚═╝░░
//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
    cin>>n;
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string give;
    cin>>give;
    if(n==1)
    {
      for(int i=0;i<give.length();i++)
      {
        int index=original.find(give[i]);
        cout<<key[index];
      }
    }
    if(n==2)
    {
      for(int i=0;i<give.length();i++)
      {
        int index=key.find(give[i]);
        cout<<original[index];
      }
    }
  return 0;
}
