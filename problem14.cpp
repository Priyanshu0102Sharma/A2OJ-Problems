#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_element = INT_MIN;
    int min_element = INT_MAX;

int max_index=0;
int min_index=0;
    for(int i=0;i<n;i++)
{
    if(a[i] > max_element)
    {
        max_element= a[i];
        max_index = i;
    }

    if(a[i] <= min_element)
    {
        min_element = a[i];
        min_index = i;
    }
}

// cout<<"max_index: "<<max_index<<endl;
// cout<<"min_index: "<<min_index<<endl;

int ans=0;
ans+=max_index;
if(min_index!=n-1 && max_index > min_index)
{
    int b = n - min_index - 1;
    ans += b-1;
}
if(min_index > max_index)
{
     int b = n - min_index - 1;
    ans += b;
}

cout<<ans<<endl;

    return 0;
}