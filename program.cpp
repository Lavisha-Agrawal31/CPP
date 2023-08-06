#include<iostream>
using namespace std;
//WAP that will ask for a personal intial letter and then it will return or print hello with that initial letter.
/*int main()
{
    char ch;
    cout<<"Enter initial letter: ";
    cin>>ch;
    cout<<"Hello "<<ch<<endl;
}*/
/*int main()
{
	int a=10;
	cout<<++a<<endl;#incl
	cout<<a++<<endl;
	cout<<a<<endl;
	return 0;
}*/
//WAP to take an input of an integer and return square of next number
/*int main()
{
	int a,b,sq;
	cout<<"Enter number: ";
	cin>>a;
	b= ++a;
	sq=b*b;
	cout<<sq;
	
}*/
//WAp to greet a user with its gender specific greeting
//Hello Mr. Y
//Hello Ms. L
/*int main()
{
	char ch,gen;
	cout<<"Enter name: "<<endl;
	cin>>ch;
	cout<<"Enter gender: "<<endl;
	cin>>gen;
	if(gen=='M'|| gen=='m')
	{
		cout<<"Hello Mr. "<<ch;
	}
	else if(gen=='F' || gen=='f')
	{
		cout<<"Hello Ms. "<<ch;
	}
	else
	{
		cout<<"Nothing"<<endl;
	}
	
}*/
/*int main()
{
	char ch;
	cout<<"Enter name: "<<endl;
	cin>>ch;
	int n;
	cout<<"select from below option"<<endl;
	cout<<"1.male"<<endl;
	cout<<"2.female"<<endl;
	cout<<"Enter gender: "<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<"Hello Mr. "<<ch;
	}
	else if(n==2)
	{
		cout<<"Hello Ms. "<<ch;
	}
	else
	{
		cout<<"Nothing"<<endl;
	}
	
}*/

//using switch case
/*int main()
{
	int choice;
	char ch;
	cout<<"Enter initial letter: ";
	cin>>ch;
	cout<<"Select your choice"<<endl;
	cout<<"1.male"<<endl;
	cout<<"2.female"<<endl;
	cout<<"Enter your gender: "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		    cout<<"Hello Mr."<<ch;
		    break;
	    case 2:
		    cout<<"Hello Ms."<<ch;
		    break;
	    default:
		    cout<<"Invalid";
	}
}*/

//way 2
/*int main()
{
	int choice;
	char ch;
	cout<<"Enter initial letter: ";
	cin>>ch;
	char op;
	cout<<"What's your gender?(g/b)";
	cin>>op;
	switch(op)
	{
		case 'g':
			cout<<"Hello Ms."<<ch;
			break;
		case 'b':
			cout<<"Hello Mr."<<ch;
			break;
		default:
			cout<<"Invalid";
			
	}
}*/

//WAP to take 2 numbers from the user and swap them and show them.
//2 3 -> 3 2 
/*int main()
{
	int a,b,c;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"value of a: "<<a<<endl;
	cout<<"Value of b: "<<b;
}*/

//without using extra variable
/*int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"value of a : "<<a<<endl;
	cout<<"value of b: "<<b;
	
}*/

//way 3
/*int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<"value of a : "<<a<<endl;
	cout<<"value of b: "<<b;
	
}*/

//relational operators
//WAP to make a calculator 
//1. addition
//2.minus
//3.multiplication
//4.divide 
//select any option and give the output
/*int main()
{
	cout<<"select any option: "<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.subtraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.division"<<endl;
	int n;
	cout<<"Enter your choice: "<<endl;
	cin>>n;
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	switch(n)
	{
		case 1:
			cout<<"Addition: "<<a+b;
			break;
		case 2:
			cout<<"Subtraction: "<<a-b;
			break;
		case 3:
			cout<<"multiplication: "<<a*b;
			break;
		case 4:
			cout<<"division: "<<a/b;
			break;
		default:
			cout<<"invalid";
	
		
	}
	
}*/

//WAP to take three integers from the user and return max of those three
//2 3 4->4
/*int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a;
	}
	else if(b>a && b>c)
	{
		cout<<b;
	}
	else 
	{
		cout<<c;
	}
}*/
//modify calculator program - do calculation till user is not saying to end.
/*int main()
{
	cout<<"select any option: "<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.subtraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.division"<<endl;
	int n,z,i;
	cout<<"Enter your choice: "<<endl;
	cin>>n;
	cout<<"Enter how many times you wanna execute: ";
	cin>>z;
	for(i=0;i<=z;i++)
	{
	    int a,b;
	    cout<<"Enter a: ";
	    cin>>a;
	    cout<<"Enter b: ";
	    cin>>b;
	    switch(n)
	    {
		    case 1:
			    cout<<"Addition: "<<a+b;
			    break;
		    case 2:
			    cout<<"Subtraction: "<<a-b;
			    break;
		    case 3:
			    cout<<"multiplication: "<<a*b;
			    break;
		    case 4:
			    cout<<"division: "<<a/b;
			    break;
		    default:
			    cout<<"invalid";
	   }
   }
	
}*/

//using do while loop
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,choice;
    do
    {
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Operation You want to do : ";
        cin>>choice;
        if(choice==5){
            cout<<"Exiting Program";
        }
        else{
            if(choice == 1){
                cout<<"Enter the First Number : ";
                cin>>num1;
                cout<<"Enter the Second Number : ";
                cin>>num2;
                cout<<"Addition is : "<<num1+num2<<endl;
        }
        else if(choice == 2){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Subtraction is : "<<num1-num2<<endl;
        }
        else if(choice == 3){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Multiplication is : "<<num1*num2<<endl;
        }
        else if(choice == 4){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Division is : "<<num1/num2<<endl;
        }
        else{
            cout<<"Wrong Input";
        }
        }
    } while (choice!=5);
    
    


    return 0;
}



