#include <bits/stdc++.h>
using namespace std;
int mainMemory[4096];
int cacheMemory[128];
string address;
char word[4];
string block;
string tag;

void readAddress()
{
  cout<<"Type the Address : \t";
  
  cin>>address;
 
cout<<"word :\t";
 for(int i=12;i<=15;i++)
 {
 	cout<<address[i];
 }
 cout<<"\n"<<"block :\t";
 for(int i=5;i<=11;i++)
 {
 	cout<<address[i];
 }
 cout<<"\n"<<"tag :\t";
 for(int i=0;i<=4;i++)
 {
 	cout<<address[i];
 }
cout<<endl;
    

}
int main()
{
	cout<<"enter your choice \t: 1.read \t 2.write";
	int choice ;
	cin>>choice;
	 if(choice==1)
	 	readAddress();
	 /*else if(choice==2)
	 	writeAddress();*/
}
