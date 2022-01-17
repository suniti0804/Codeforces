#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0; i<n; i++)
          cin>>a[i];
          
        unordered_map<int,int> hmap;
 
        int minDistance = INT_MAX;
        int len=0;
        int previousIndex = 0, currentIndex = 0;
        for (int i = 0; i < n; i++) 
        {
     
            if (hmap.find(a[i])!=hmap.end()) 
            {
                currentIndex = i;
                previousIndex = hmap[a[i]];
                
                if(currentIndex-previousIndex<minDistance)
                {
                    minDistance=currentIndex-previousIndex;
                    len=previousIndex+(n-currentIndex);
                }
            }
            hmap[a[i]] = i;
        }
     
        if(minDistance == INT_MAX)
           cout<<-1;
        else
          cout<<len;
        cout<<"\n";  
    }
    return 0;
}