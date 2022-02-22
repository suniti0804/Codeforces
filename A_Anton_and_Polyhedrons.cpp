#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int res=0;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        res+=mp[s];                                                                
    }
    cout<<res<<"\n";
    return 0;
}