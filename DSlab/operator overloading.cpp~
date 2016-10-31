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
  box operator+(box &b)
    	{
 	    	box d;
	    	d.len=len+b.len;
		    d.hei=hei+b.hei;
		    d.bre=bre+b.bre;
	    	return d;
	    }
void show();	    
};
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
