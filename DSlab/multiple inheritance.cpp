

/*multiple inheritance  */
#include<iostream>
using namespace std;
class base1
{
	protected:
		int x;
	public:
		void showx()
		{
			cout<<"the value of x : "<<x<<endl;
		}
};
 class base2
 {
 protected:
 	int y;
 	public:
 		void showy()
 		{      
 				cout<<"the value of y : "<<y<<endl;
		 }
 
 	
 };
 class derived : public base1,public base2
 {
 	public:
 		void show(int a,int b)
 		{
 			 x=a;
 		     y=b;
 		      cout<<" x: "<<x<< " y: "<<y<<endl;
		 }
 		
 	
 	
 };
 int main()
 {
 	derived ob;
 	ob.show(5,3);
 	ob.showx();
 	ob.showy();
 	
 	return 0;
 }
