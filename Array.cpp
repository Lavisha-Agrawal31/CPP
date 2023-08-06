#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//deletion af an element from an array
/*int main()
{
	int n;
	cout<<"Enter size: "<<endl;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x;
	cout<<"Enter number you wants to delete 1-5: "<<endl;
	cin>>x;
	for(i=x-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	
}*/

//sorting 
//inbuilt sort
/*int main()
{
	int n=5;
	int arr[]={4,1,6,2,3};
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<" ";
	}
}*/

int main()
{
	int n;
	cout<<"Enter size: ";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	int m;
	cout<<"Enter size: ";
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	int c[n+m];
	
	
}
