#include<iostream>
using namespace std;
int main()
{

int n; cin>>n;
string s; cin>>s;
int j = 0;

int i = 0;
int count = 0; 
while( i < n-1 )
{
    int j =i+1;
    while(s[i] == s[j])
    {
        ++count;
        ++j;
    }
    ++i;
    i = j-1;
}
cout<<count<<endl;

    return 0;
}