#include<bits/stdc++.h>
#define max 1000
using namespace std;
int main()
{ char name1[max],name2[max],sn1[max],sn2[max];
  cin>>name1>>sn1>>name2>>sn2;
    int res = strcmp(sn1,sn2);
    if (res==0)
        printf("ARE Brothers");
    else 
        printf("NOT");
return 0;
}
