#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		v.push_back(m);
	}
	sort(v.begin(),v.end());
	while(q--)
	{
		int x;
		cin>>x;
		bool ispresent=0;
		int l=0,h=n-1,mid;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(x==v[mid])
            {
            //  cout<<"found"<<endl;
			 ispresent=1;
             break;
     		}
	
         	else if(x<v[mid]){h=mid-1;}
	     	else{l=mid+1;}
		 }
		if(ispresent){cout<<"found"<<endl;}
		else{cout<<"not found"<<endl;}
	}
	return 0;
}
