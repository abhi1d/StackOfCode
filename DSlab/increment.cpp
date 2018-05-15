#include<iostream>
using namespace std;
  class box
  {
  		int x;
		int y;
		int z;
	public:
		box()
		{	
  			x=0;
  			y=0;
			z=0;
		}

		void getdata(int l,int b,int h)
		{
			x=l;
			y=b;
			z=h;
			cout<<"enter the the length breadth and height respectively\n";
			cin>>x>>y>>z;	
		}
		box operator ++(int)
		{
			x++;
			y++;
			z++;
		return*this;
		}
		int show();

};
int box::show()

{
		cout<<"total length \t:	"<<x<<endl<<"total breadth\t:"<<y<<endl<<"total height\t:"<<z<<endl;
}


int main()
{
	box b1;
	int l,b,h;
	b1.getdata(l,b,h);
	b1++;
	b1.show();
	return 0;
}
