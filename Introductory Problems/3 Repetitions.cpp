#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans = 0,cnt = 0;
    for(int i = 1;i<s.size();i++){
        if(s[i]==s[i-1])
            cnt++;
        else {
            ans = max(ans,cnt);
            cnt = 0;
        }
    }
    cout<<max(ans,cnt)+1;
    return 0;
}

