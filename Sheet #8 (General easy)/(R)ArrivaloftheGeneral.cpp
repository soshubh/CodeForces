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
typedef long long int l;
int main(){
	int a[100]={0};
	int n;
	cin>>n;
	int la=0,la_l=0,li=111,li_l=0;
	for (int i=0; i<n; ++i)
	{
		cin>> a[i];
		if(a[i]>la)
			la=a[i],la_l=i;
		if(a[i]<=li)
			li=a[i];
	}
 
	int c=0;
	while(la_l!=0)
  {
		int t;
		t=a[la_l];
		a[la_l]=a[la_l-1];
		a[la_l-1]=t;
		la_l--;
		c++;
	}
	for (int i = 0; i < n; ++i)
		if (a[i]<=li)
			li=a[i],li_l=i;
 
	while(li_l!=n-1)
  {
		int t;
		t=a[li_l];
		a[li_l]=a[li_l+1];
		a[li_l+1]=t;
		li_l++;
		c++;
	}
	cout<<c<<endl;
	return 0;
}
