#include<bits/stdc++.h>
using namespace std;
int Ncr(int n,int r)
{
    int ans=1;
    for(int i=1;i<=r;i++)
    {
        ans=ans*(n-(i-1));
        ans=ans/i;
    }
    return ans;
}
int GetElementOfPascalsTriangle(int row,int col)
{
  /*4
  To get the element in pascal triangle having row n and col r is (n-1 C r-1)
  */
   return Ncr(row-1,col-1);
}
int main()
{
    int row;
    int col;
    cout<<"Enter the row number 1 based indexing";
    cin>>row;
    cout<<"Enter the column number 1 based indexing";
    cin>>col;
    int el=GetElementOfPascalsTriangle(row, col);
    cout<<"The element present at row "<<row<<" and column "<<col<<" is "<<el<<endl;
    return 0;
}