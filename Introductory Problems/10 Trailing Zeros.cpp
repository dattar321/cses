#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll)(1e9+7);
int main()
{
    int n;
    cin>>n;
    ll ans = 0;
    for(ll i = 5;i<=n;i*=5)
        ans+=(ll)(n/i);
    cout<<ans<<endl;
    return 0;
}


