#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos,res;
	cin>>n;
	cin>>pos;
	res=n^((pos-1)<<1);
	cout<<res;
}
