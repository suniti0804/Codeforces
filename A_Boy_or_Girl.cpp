#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    set<int> st;
    for(auto s:str)
      st.insert(s);

    if(st.size()&1)
      cout<<"IGNORE HIM!";
    else 
      cout<<"CHAT WITH HER!";

    return 0;       

}