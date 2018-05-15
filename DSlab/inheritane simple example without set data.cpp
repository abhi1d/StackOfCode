#include<iostream>
using namespace std;
class base{

public:		
	  void show(int x,int y){ cout<<" "<<x<<"   "<<y<<"\n";}	 
};
	class derived : public base
	{
	 
	 private:
	 	int k;
	 public:
	 	
	 	void showk(int k)
	 	{
	 		cout<<"\n"<<k<<"  " <<endl;
		 }
	  	
	};

	int main()
	{
		derived ob;
	
		ob.show(5,7);
		ob.showk(4);
		return 0;
	}
