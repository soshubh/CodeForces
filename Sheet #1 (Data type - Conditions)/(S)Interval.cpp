#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
    cin>>n;
    if(n>=0&&n<=25)
      cout<<"Interval [0,25]";
    else if(n>25&&n<=50)
      cout<<"Interval (25,50]";
    else if(n>50&&n<=75)
      cout<<"Interval (50,75]";	
    else if(n>75&&n<=100)
      cout<<"Interval (75,100]";
    else
      cout<<"Out of Intervals";
    
    return 0;
}
