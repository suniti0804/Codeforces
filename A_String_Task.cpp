#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    char x;
    while(cin>>x)
    {
        if(x>='A'&&x<='Z')
          x+=32;
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y')
          continue;
        else
          cout<<"."<<x;    
    }

    return 0;
}