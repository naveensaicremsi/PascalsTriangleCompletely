#include<bits/stdc++.h>
using namespace std;

class PascalsTriangle{
   private:
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
   public:
   void print(vector<int>ds)
   {
     for(auto it:ds) 
     {
        cout<<it<<" ";
     }
     cout<<endl;
   }
   vector<int>GetRow(int row)
   {
    vector<int>ds;
    long long ans=1;
    ds.push_back(ans);
    for(int col=0;col<row;col++)
    {
        ans=ans*(row-col);
        ans=ans/(col+1);
        ds.push_back(ans);
    }
    return ds;
   }
   vector<vector<int>>GetTriangle(int rows)
   {
     vector<vector<int>>ans;
     for(int i=1;i<=rows;i++)
     {
        ans.push_back(GetRow(i-1));
        print(GetRow(i-1));
     }
     return ans;
   }
   int GetElementAtRowAndCol(int row,int col)
   {
     return Ncr(row-1,col-1);
   } 
};
int main()
{
    PascalsTriangle p;
    int row=6;
    int col=3;
    cout<<"The element present at row "<<row<<" and column "<<col<<" is "<<" ";
    cout<<p.GetElementAtRowAndCol(row,col)<<endl;
    int rows=6;
    cout<<"The pascal Triangle with first "<<rows<<" rows is"<<endl;
    vector<vector<int>>Triangle=p.GetTriangle(rows);
    int r=3;
    cout<<"The "<<r<<"th row of the pascals triangle is "<<endl;
    vector<int>ds=p.GetRow(r-1);
    p.print(ds);
    return 0;
}