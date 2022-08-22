#include<iostream>
#include<cmath>

using namespace std;
int main()
{
int a[5][5];

// getting the input
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
}

int pos_row=0;
int pos_col=0;

// checking the position of 1
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(a[i][j]==1)
        {
            pos_row = i;
            pos_col = j;
            break;
        }
    }
}


// ans
int ans;

ans = abs(2-pos_row) + abs(2-pos_col);  

cout<<ans<<endl;



    return 0;
}