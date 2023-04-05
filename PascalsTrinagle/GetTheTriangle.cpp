#include<bits/stdc++.h>
using namespace std;
void GetTheRow(int row)
{
    int ans=1;
    cout<<ans<<" ";
    for(int col=0;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/(col+1);
        cout<<ans<<" ";
    }
}
int main()
{
    cout<<"Enter the no rows you want to get";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        GetTheRow(i-1);
        cout<<endl;
    }
    return 0;
}