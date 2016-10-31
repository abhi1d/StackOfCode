//swapping using call by refernce
#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
	int x,y;
	x=10;
	y=20;
	swap(x,y);
 cout<<"x : "<<x<<endl<<" y : "<<y;
 //here no change in the value of x and y
}
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
	return ;
}
