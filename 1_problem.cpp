#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int sum_x=0, sum_y=0, sum_z=0;
int x, y, z;
while(n--)
{
   cin>>x>>y>>z;
   sum_x+=x;
   sum_y+=y;
   sum_z+=z;
}

if(!sum_x && !sum_y && !sum_z)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}