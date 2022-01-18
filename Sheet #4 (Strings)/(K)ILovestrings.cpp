// soshubh
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ul;
typedef long double lb;  
int main(){
int p;
cin>>p;
while (p--){
 string s,t;
 cin>>s>>t;
 int len1 = s.length();
 int len2 = t.length();
//  cout<<s<<" "<<t<<" "<<len1<<" "<<len2;
 if(len1<len2){
     int i=0;
       while (s[i]!='\0')
         {
            cout<<s[i];
            cout<<t[i];
            i++;
         }
       while (t[i]!='\0')
         {
            cout<<t[i];
            i++;
         }
       cout<<endl;
    }
    else if(len1>len2){
      int i=0;
      while (t[i]!='\0')
       {
          cout<<s[i];
          cout<<t[i];
          i++;
       }
      while (s[i]!='\0')
       {
          cout<<s[i];
          i++;
       }
      cout<<endl;
   }
   else if(len1==len2){
    int i=0;
     while (t[i]!='\0')
     {
      cout<<s[i];
      cout<<t[i];
      i++;
     }
  cout<<endl;
  }
}
}
