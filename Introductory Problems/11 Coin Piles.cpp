#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll)(1e9+7);
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a+b)%3==0 && ((a>0 && b>0)||(a==0&&b==0)) && max(a,b)<=(min(a,b)*2))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


