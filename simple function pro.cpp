#include<iostream>
using namespace std;
void add();
void sub();
void mul();
 
int valueOne;
int valueTwo;
int main()
{
	add();
	sub();
	mul();
	


}
void add()
{
	cout<<"add the valueOne"<<endl;
	cin>>valueOne;
	cout<<"add the valueTwo"<<endl;
	cin>>valueTwo;
	cout<<"________________"<<endl;
	cout<<"addition"<<"="<<valueOne+valueTwo<<endl;
	cout<<"================"<<endl;
}
void sub()
{
	cout<<"sub the valueOne"<<endl;
	cin>>valueOne;
	cout<<"sub the valueTwo"<<endl;
	cin>>valueTwo;
	cout<<"________________"<<endl;
	cout<<"subtraction"<<"="<<valueOne-valueTwo<<endl;
	cout<<"================"<<endl;
}
void mul()
{
	cout<<"mul the valueOne"<<endl;
	cin>>valueOne;
	cout<<"mul the valueTwo"<<endl;
	cin>>valueTwo;
	cout<<"________________"<<endl;
	cout<<"multiplication"<<"="<<valueOne*valueTwo<<endl;
	cout<<"================"<<endl;
}
