#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=false;
    while(n--)
    {
        int i;
        cin>>i;
        if(i==1)
          flag=true;
    }
    if(flag)
      cout<<"HARD";
    else  
       cout<<"EASY";
    return 0;  
}