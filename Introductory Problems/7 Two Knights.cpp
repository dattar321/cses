#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    for(ll i = 1;i<=n;i++){
        ll a= i*i;
        ll ans = a*(a-1)/2;
        if(i>2)ans-=4*(i-1)*(i-2);
        cout<<ans<<endl;
    }

    return 0;
}
