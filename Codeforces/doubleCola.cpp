#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
 long int p;
 long long int z=pow(2,p);
 for(p=0;p<=pow(10,9);p++)
 {
     if(n<=(5+(5*z)))
       break;

 }
cout<<p;
/*if(p>=1)
 {
 
 if((5+(5*pow(2,p-1)))<n && ((5+(5*pow(2,p-1)))+pow(2,p))>=n )
 cout<<"Sheldon";
 else if((5+(pow(2,p)+(5*pow(2,p-1))))<n && ((5+(5*pow(2,p-1)))+pow(2,(p+1)))>=n)
  cout<<"Leonard";
else if((5+(pow(2,p+1)+(5*pow(2,p-1))))<n && ((5+(5*pow(2,p-1)))+pow(2,(p+2)))>=n)
cout<<"Penny";
else if((5+(pow(2,p+2)+(5*pow(2,p-1))))<n && ((5+(5*pow(2,p-1)))+pow(2,(p+3)))>=n)
cout<<"Rajesh";
else if((5+(pow(2,p+3)+(5*pow(2,p-1))))<n && ((5+(5*pow(2,p-1)))+pow(2,(p+4)))>=n)
cout<<"Howard";
}
else
{
if(n==1)
cout<<"Sheldon";
else if(n==2)
cout<<"Leonard";
else if(n==3)
cout<<"Penny";
else if(n==4)
cout<<"Rajesh";
else if(n==5)
cout<<"Howard";
} */
}
