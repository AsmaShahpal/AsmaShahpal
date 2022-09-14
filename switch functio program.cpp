#include<iostream>
#include<math.h>
using namespace std;
void add();
void sub();
void mul();
void squar();
int main()
{
	int choice;
	cout<<"please inter youre choice \n1: add\n2: sub\n3: mul\n4:squar";
	cin>>choice;
	switch(choice)
	{
		case 1:
		    add();
		    break;
	    case 2:
		    sub();
	     	break;
		case 3:
	    	mul();
		    break;
		case 4:
	    	squar();
	    	break;
	    	default:
	    		cout<<"invailled choice";
	    		
	    		
}
	    		
		
		
	}
	void add()
	{
		int valueOne;
		int valueTwo;
		cout<<" please enter the valueOne";
		cin>>valueOne;
		cout<<"please enter the valueTwo";
		cin>>valueTwo;
		cout<<valueOne+valueTwo;
	}
	void sub()
	{
		int valueOne;
		int valueTwo;
		cout<<" please enter the valueOne";
		cin>>valueOne;
		cout<<"please enter the valueTwo";
		cin>>valueTwo;
		cout<<valueOne-valueTwo;
	}
	void mul()
	{
		int valueOne;
		int valueTwo;
		cout<<" please enter the valueOne";
		cin>>valueOne;
		cout<<"please enter the valueTwo";
		cin>>valueTwo;
		cout<<valueOne*valueTwo;
	}
	void squar()
	{
		int valueOne;
		int valueTwo;
		cout<<" please enter the valueOne";
		cin>>valueOne;
	
	}
	
