#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll)(1e9+7);
int main()
{
    int n;
    cin>>n;
    ll s  = 1;
    for(int i = 1;i<=n;i++){
        s*=2;
        s%=mod;
    }
    cout<<s<<endl;
    return 0;
}

