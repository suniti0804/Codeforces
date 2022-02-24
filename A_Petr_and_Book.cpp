#include<bits/stdc++.h>
using namespace std;
#define f(i, a, b) for(int i=a; i<b; i++)
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;

    int arr[7];
    for(int i=0; i<7; i++)
      cin>>arr[i];

    int day=0;
    int sum=0;
    while(sum<n)
    {
        sum+=arr[day%7];
        if(sum<n)
          day++;
    }  

    cout<<(day%7)+1<<"\n";
    return 0;
}