#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0||((i%2)==0&&(i%4)==0&&j==1)||(i%2==0&&i%4!=0&&j==m))
              cout<<"#";
            else
              cout<<".";  
            
        }
        cout<<"\n";
    }
    return 0;
}