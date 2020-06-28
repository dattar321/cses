#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,px;
    long long ans = 0;
    cin>>n>>px;
    for(int i=1;i<n;i++){
        cin>>x;
        if(px>x){
            ans+=(px-x);
        }
        else px = x;
    }
    cout<<ans<<endl;
    return 0;
}

