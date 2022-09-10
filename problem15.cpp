#include<iostream>
#include<iomanip>
using namespace std;
 int main()
 {


    int n; 
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    double ans;
    int sum=0;
    for(int i = 0;i < n; i++)
    {
        sum+=a[i];
    }

    ans = (double)sum/(double)n;
    cout<<setprecision(12)<<ans<<endl;


    return 0;
 }