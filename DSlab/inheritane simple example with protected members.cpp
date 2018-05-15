#include<iostream>
using namespace std;
class base{
protected:
	int i,j,k;
public:		
void set(int x,int y)
	{  	i=x;
 		j=y; 
	 }


 void show()
 {
  cout<<" "<<i<<"   "<<j<<"\n";
  }	 
};
	class derived : public base
	{
	 

	 public:
	 	derived(int l ){ k=l;}
		 
	 	void showk( )
	 	{
	 		cout<<"\n"<<k<<"  " <<endl;
		 }
	  	
	};

	int main()
	{
		derived ob(7);
	     ob.set(3,6);
		ob.show();
		ob.showk();
		return 0;
	}
