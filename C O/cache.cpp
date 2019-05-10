#include <bits/stdc++.h>
using namespace std;
void  set_associative_mapping(int c,int m,int a);
void associative_mapping(int c,int m,int a);
void direct_mapping(int c,int m,int a)
{
	 int word=log2(a);
	 int tag=log2(m/c);
	 int block=a-word-tag;
	 cout<<"Direct mapping results  : \n";
	 cout<<"word :  "<<word<<"  "<<"tag :  "<<tag<<"  "<<"block :  "<<block<<endl;
}
void associative_mapping(int a)
{
	 int word=log2(a);
	 int tag= a-word;
	 cout<<"Associative mapping results  : \n";
	 cout<<"word :  "<<word<<"  "<<"tag :  "<<tag<<endl;
}
void  set_associative_mapping(int c,int m,int a)
{
	cout<<"2^n type set associative_mapping  :\t type the value of n   :      ";
   int n;
   cin>>n;
   cout<<"\""<<pow(2,n)<<" blocks will reside in each set \""<<endl;
   int word=log2(a);
   int totalSet=c/pow(2,n);
   int set=log2(totalSet);
   int tag = log2(m/totalSet);
     cout<<"Set-Associative mapping results : \n";
	cout<<"word :  "<<word<<"  "<<"tag :  "<<tag<<"  "<<"set :  "<<set<<endl;

}
int main()
{
	int cache ,main,address;
	cout<<"enter the cache memory size : \t";
	cin>>cache;
	cout<<"enter the Main memory size : \t";
	cin>>main;
	cout<<"enter the address size : \t";
	cin>>address;
	while(true)
	{
		cout<<"enter the mapping :\n 1.Direct Mapping \n 2.Associative Mapping \n 3.Set Associative Mapping \n 4.exit \n";
		cout<<endl;
		int choice;
		cin>>choice;
	
			if(choice==1)
			  direct_mapping(cache,main,address);
			else if(choice==2)
			  associative_mapping(address);
			else if(choice==3)
			  set_associative_mapping(cache,main,address);
			else
			    break;
	} 
   return 0;	
}
