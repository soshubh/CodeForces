// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░╔═╗░╔═╦╗░░╔╗╔╗░░░░░░░░░░░░░
// ░░░░░░░░░░░║═╬═╣═╣╚╦╦╣╚╣╚╗░░░░░░░░░░░░
// ░░░░░░░░░░░╠═║╬╠═║║║║║╬║║║░░░░░░░░░░░░
// ░░░░░░░░░░░╚═╩═╩═╩╩╩═╩═╩╩╝░░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░╔═══╗╔═══╗╔═══╗╔═══╗░░░░░░░░░░
// ░░░░░░░░║╔═╗║║╔═╗║╚╗╔╗║║╔══╝░░░░░░░░░░
// ░░░░░░░░║║░╚╝║║░║║░║║║║║╚══╗░░░░░░░░░░
// ░░░░░░░░║║░╔╗║║░║║░║║║║║╔══╝░░░░░░░░░░
// ░░░░░░░░║╚═╝║║╚═╝║╔╝╚╝║║╚══╗░░░░░░░░░░
// ░░░░░░░░╚═══╝╚═══╝╚═══╝╚═══╝░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include<bits/stdc++.h>
using namespace std;
int main()
{  char a[1006],b[1006];
	cin>>a>>b;
	int la=strlen(a),lb=strlen(b);
	int u;
	for(int i=0;i<la;i++)
	{
		if(a[i]=='|')
		u=i;
	}
	int x=u,y=la-u-1;
	if(x>y&&lb>=x-y&&lb%2==(x-y)%2)
	{
		int p=(lb-x+y)/2;
		for(int i=0;i<u;i++)
		cout<<a[i];
		for(int i=0;i<p;i++)
		cout<<b[i];
		cout<<"|";
		for(int i=p;i<lb;i++)
		cout<<b[i];
		for(int i=u+1;i<la;i++)
		cout<<a[i];
		cout<<"\n";
	}
	else if(y>x&&lb>=y-x&&lb%2==(y-x)%2)
	{
		int p=(lb+x-y)/2;
		for(int i=0;i<u;i++)
		cout<<a[i];
		for(int i=p;i<lb;i++)
		cout<<b[i];
		cout<<"|";
		for(int i=u+1;i<la;i++)
		cout<<a[i];
		for(int i=0;i<p;i++)
		cout<<b[i];
		cout<<"\n";
	}
	else if(x==y&&lb%2==0)
	{
		int p=(lb+x-y)/2;
		for(int i=0;i<u;i++)
		cout<<a[i];
		for(int i=p;i<lb;i++)
		cout<<b[i];
		cout<<"|";
		for(int i=u+1;i<la;i++)
		cout<<a[i];
		for(int i=0;i<p;i++)
		cout<<b[i];
		cout<<"\n";
	}
	else
	cout<<"Impossible\n";
}
