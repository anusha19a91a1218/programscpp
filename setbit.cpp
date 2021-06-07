
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int set_count=0;
	while(n)
	{
		set_count+=n&1;
		n>>=1;
	}
	cout<<set_count;
	return 0;
	
}



