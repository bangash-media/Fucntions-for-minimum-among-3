#include <iostream>
/*a function that finds the minimum number among 3 default arguments of function.
Now find the minimum number again by calling the same function, with 2 default arguments
and 1 passed by value. Do it again for all arguments passed by value*/
using namespace std;

void minima(int num1=5,int num2=6,int num3=7); //function declaration

int main() 
{
	int num1,num2,num3;
	cout<<"Enter First Number: "; cin>>num1;
	cout<<"Enter Second Number: "; cin>>num2;
	cout<<"Enter Third Number: "; cin>>num3;
	minima(); //function call for "3" default arguments
	minima(num1); //function call for "2"default arguements & "1"passed by value
	minima(num1,num2,num3); //function call for all passed values
	
	
	
	return 0;
}
void minima(int num1,int num2,int num3)  //function defination
{
	if (num1<num2&&num1<num3)
	{
		cout<<"\t\tThe smallest number In First Call= "<<num1<<endl;
	}
    if (num2<num1&&num2<num3)
	{
		cout<<"\t\tThe smallest number In second Call= "<<num2<<endl;
	}
	if (num3<num2&&num3<num1)
	{
		cout<<"\t\tThe smallest number In third Call= "<<num3<<endl;
	}
	
}
