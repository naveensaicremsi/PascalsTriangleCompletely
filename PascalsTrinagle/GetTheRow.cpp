#include<bits/stdc++.h>
using namespace std;

void GenerateRow(int row)
{
    int ans=1;
    cout<<ans<<" ";
    for(int col=0 ;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/(col+1);
        cout<<ans<<" ";
    }
}
int main()
{
    int row;
    cout<<"Enter the row Number which starts with 1";
    cin>>row;
    GenerateRow(row-1);
    return 0;
}