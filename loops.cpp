#include<iostream>
using namespace std;
/*int main()
{
	int mt,at;
	cout<<"Enter amount of petrol in main tank: "<<endl;
	cin>>mt;
	cout<<"Enter amount of petrol in additional tank: "<<endl;
	cin>>at;
	int used=0;
	int ans=0;
	while(mt>0)
	{
		ans+=10;
		mt--;
		used++;
		if(used%5==0 && at>0)
		{
			mt++;
			at--;
		}
	}
	cout<<"maximum distance covered is: "<<ans<<endl;
}*/

//array
/*int main()
{
	int choice;
	do
	{
		cout<<"Select your option: "<<endl;
		cout<<"1.addtiton"<<endl;
		cout<<"2.multiplication"<<endl;
		cout<<"3.Exit program"<<endl;
		cin>>choice;
		if(choice==3)
		{
			cout<<"Exit from the program";
		}
		else
		{
		if(choice==1)
		{
			int n,i;
			cout<<"Enter size of an array: ";
			cin>>n;
			int a[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			int sum=0;
			for(i=0;i<n;i++)
			{
				sum=sum+a[i];
			}
			cout<<sum<<endl;
	    }
		else if(choice==2)
		{
			int n,i;
			cout<<"Enter size of an array: ";
			cin>>n;
			int a[n],multi=1;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<n;i++)
			{
				multi=multi*a[i];
			}
			cout<<multi<<endl;
		}
		else
		{
			cout<<"wrong input";
		}
	    }
			
		
	}while(choice!=3);
}*/


