#include<iostream>
using namespace std;
int main()
{
  unsigned int s[5][5],x,y;
enter(s[5][5]);
for(unsigned int i=0;i<5;i++)
{
for (unsigned int j=0;j<5;j++)
{
if(s[i][j]==1)
{  
  if(i==0 || i==4)
    x=2;
  else if(i=1||i==3)
  x=1;
  else
  x=0;
if(j==0 || j==4)
    y=2;
  else if(j==1||j==3)
  y=1;
  else
  y=0;
}
}
}
cout<<x+y;
return 0;
}
void enter(s[5][5])
{
for(unsigned int i=0;i<5;i++)
{
for (unsigned int j=0;j<5;j++)
{
cin>>s[i][j];
}
}
}
  
