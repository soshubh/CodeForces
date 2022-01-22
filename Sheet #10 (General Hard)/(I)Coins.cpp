#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[3];
    int min,mid,max;
    char temp[10];
    memset(num,0,sizeof(num));
    for(int i=0;i<3;i++){
        cin>>temp;
        if(temp[1]=='>')
            num[temp[0]-'A']++;
        if(temp[1]=='<')
            num[temp[2]-'A']++;
    }
    if(num[0]==num[1]||num[1]==num[2]||num[2]==num[0]){
        cout<<"Impossible"<<endl;
    }
    else{
        for(int i=0;i<3;i++){
            if(num[i]==2)
                max=i;
            if(num[i]==1)
                mid=i;
            if(num[i]==0)
                min=i;
        }
        printf("%c%c%c\n",min+'A',mid+'A',max+'A');
    }
    return 0;
}
