#include<iostream>
#include<conio.h>
using namespace std;
void add();
int subtract();
void multiplication(int,int);
float division(float,float);
void add()
{
	int a,b;
	cout<<"\nEnter two numbers for addition: ";
	cin>>a>>b;
	cout<<"\nSum= "<<a+b<<"\n";
	
}
int subtract()
{
	int a,b;
	cout<<"\nEnter two numbers subtraction: ";
	cin>>a>>b;
	return a>b?(a-b):(b-a);
}
void multiplication(int a, int b)
{
	cout<<"\nMultiplication = "<<a*b<<"\n";
}
float division(float a,float b)
{
	return (a/b);
}
int menu()
{
	cout<<"1. add\n";
	cout<<"2. subtract\n";
	cout<<"3. multiptication\n";
	cout<<"4. division\n";
	cout<<"5. exit\n";
	int ch;
	cout<<"Enter your choice: ";
	cin>>ch;
	return(ch);
}
int main()   
{
	int a,b;
	float p,q;
	int breakInfaniteLoop=0;
	int sub;
	float div;
	while(1)
	{
		system("cls");
		
		switch(menu())
		{
			case 1:
				add();
				getch();
				break;
			case 2:
				sub=subtract();
				cout<<"Subtraction = "<<sub<<"\n";
				getch();
				break;
			case 3:
				
				cout<<"\nEnter two numbers for multiplication: ";
				cin>>a>>b;
				multiplication(a,b);
				getch();
				break;
			case 4:
				cout<<"\nEnter two numbers for division: ";
				cin>>p>>q;
				div=division(p,q);
				cout<<"Division = "<<div<<"\n";
				getch();
				break;
			case 5:
				breakInfaniteLoop=1;
				break;
			default:
				cout<<"Enter a valid choice!....\n";
		}//end of switch.
		
		if(breakInfaniteLoop==1)
		{
			break;
		}
		
	}//end of while loop.
	
	return 0;
}
