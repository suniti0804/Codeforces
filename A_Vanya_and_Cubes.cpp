#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
 
    int h=1, total=0;

    while(total<n)
    {
        total+=h*(h+1)/2;
        if(total<=n)
          h++;
        else
          break;  
    }
    cout<<h-1;
}