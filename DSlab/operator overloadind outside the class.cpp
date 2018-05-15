#include<iostream>
using namespace std;
class box{
int len;
int bre;
int hei;
public:
box()
{
	len=0;
	bre=0;
	hei=0;
}
 box(int l,int b,int h)
   {
    len=l;
	bre=b;
	hei=h;		
  }
  friend  box operator+(box &b1,box&b2);
void show();	    
};
 box operator+(box &b1,box&b2)
    	{
 	    	box d;
	    	d.len=b1.len+b2.len;
		    d.hei=b1.hei+b2.hei;
		    d.bre=b1.bre+b2.bre;
	    	return d;
	    }
void box::show()
  {
	cout<<"total length \t:	"<<len<<endl<<"total breadth\t:"<<bre<<endl<<"total height\t:"<<hei<<endl;
	
  }  		
	

int main()
{
	box b1(10,12,17);
	box b2(12,36,28);
	box b3=b1+b2;
	b3.show();
	return 0;
}
