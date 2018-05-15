#include<iostream>
using namespace std;
class base{
private:
 int x,y;
public:
	void set(int i,int j){x=i; y=j;}
	 		
	  void show(){ cout<<" "<<x<<"   "<<y<<"\n";}	 
};
	class derived : public base
	{
	 
	 private:
	 	int k;
	 public:
	 	derived(int d){ k=d;}
	 	void showk()
	 	{
	 		cout<<"\n"<<k<<"  " <<endl;
		 }
	  	
	};

	int main()
	{
		derived ob(3);
		ob.set(3,6);
		ob.show();
		ob.showk();
		return 0;
	}
