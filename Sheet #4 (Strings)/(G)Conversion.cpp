#include <bits/stdc++.h>
using namespace std;
int main()
{   
     string str;
     cin>>str;
     int n=str.length();
    for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32; 
        else if (str[i] == ',')
            str[i]=' ';      
	}
 
    cout<<str;
    
}
