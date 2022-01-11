#include <bits/stdc++.h>
using namespace std;
 int main()
{  char str[100];
   cin>>str;
   int length = strlen(str);
    
    for(int i=0;i < length ;i++){
        if(str[i] =='?'&&str[length-i-1] != '?'){
            str[i]=str[length-i-1]; }
        else if (str[i] =='?'&&str[length-i-1] == '?'){
            str[i]='a';
            str[length-i-1]='a';   }    
   }
    int flag = 0;
    for(int i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
   }}
    if(str[0]=='?')
      {for(int i=0;i< length;i++)
        cout<<"a";
      }
    else if (flag) {
        cout << "-1"; 
    }    
    else {
        cout << str ; 
    }
    return 0;
}
