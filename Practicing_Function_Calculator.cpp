#include<iostream>
#include<conio.h>
using namespace std;

//function without return type without arguements.

void add()
{
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Addition of two numbers = "<<a+b<<"\n";
}

//function without return type wit arguments.

void subtract(int a , int b)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Subtraction of two numbers = "<<a-b<<"\n";
}
//fuction with return type without arguements.
int multiply()
{
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	return (a*b);
}
//function with return type with arguements.
int divide(int a, int b)
{
	return (a/b);
}

//Menu
int menu()
{
	cout<<"1. Add\n";
	cout<<"2. Subtraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division\n";
	cout<<"5. Exit\n";
	int ch;
	cout<<"Enter your choice: ";
	cin>>ch;
	return (ch);
	
}
int main()
{
	int a,b,p,q,div,mult, endInfiniteloop=0;

	while(1){
		system("cls");
		
		switch(menu())
		{
			case 1:
				add();
				getch();
				break;
			case 2:
				subtract(a,b);
				getch();
				break;
			case 3:
				mult=multiply();
				cout<<"Multiplication of two numbers is = "<<mult<<"\n";
				getch();
				break;
			case 4:
				cout<<"Enter first number: ";
				cin>>a;
				cout<<"Enter second number: ";
				cin>>b;
				
				try{
					if(b==0)
					throw b;
					div=divide(a,b);
					cout<<"Division of two numbers is = "<<div<<"\n";
					}
				catch (int x){
					cout<<"Can not divide by "<<x;
					}
					
				getch();
				break;
			case 5:
				endInfiniteloop=1;
				break;
			default:
				cout<<"\nEnter a valid choice.....";
					
		}
		if(endInfiniteloop==1){
			break;
		}
	}
	return 0;	
}
