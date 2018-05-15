#include<iostream>
using namespace std;
	class TRIANGLE
		{
		protected:
				float a;
				int p;
				int x,y,z;
			
			
	    	public:
	         void setdata()
				 { 
	         	   cin>>x>>y>>z;
	         	   cout<<"height = "<<x<<"\n"<<"hypo = "<<y<<" \n"<<"base"<<z<<"\n"<<endl;
	         	   
			 		}
					 		
				
				
    	};
    	
     class AREA : public TRIANGLE 
	    {
	    private:
	     int base ,height;		
	 	 public:
	 	 	void show()
	 	 	 {
	 	 	 	base   =  z;
	 	 	 	height = x;
	 	 	 	a=(.5)*base*height;
	 	 	 	cout<<"the area of of the given triangle :  "<<a<<endl;
			  }
	 	 	

		};
	
	class PERIMETER : public TRIANGLE 
    	{
			 private:
			 	 int base,height,hypo;
			 	
			 public:
			 	void show()
			 	{
			 		base =x;
			 		height=y;
			 		hypo= z;
			 		p=base+height+hypo;
			 	 cout<<"\n the perimeter of the triangle :  "<<p<<endl;
				 }
			 	
			 	
	    };	 
 	int main()
{
 		cout<<"enter the only RIGHT ANGLE triangle data"<<endl;
 		AREA A;
 		A.setdata();
 		A.show();
 		PERIMETER P;
 		P.setdata();
 		P.show();
		 
	 return 0;
 		
 }
			
    
    
