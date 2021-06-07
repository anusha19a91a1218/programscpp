  
#include<bits/stdc++.h>
using namespace std;
bool sorted_or_unsorted(int a[20],int n)
{
	for(int i=0;i<10;i++)
	{
		if(a[i]>a[i+1])
		return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<10;i++)
	cin>>arr[i];
	int s=sorted_or_unsorted(arr,n);
	if(s)
	  cout<<"given is sorted array";
	else
	   cout<<"given is unsorted array";
}

