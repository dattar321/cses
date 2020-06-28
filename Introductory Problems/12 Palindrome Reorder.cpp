//Finally AC after a long try
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll)(1e9+7);


void solve()
{
    string s;
    cin>>s;
    int ck[26],cnt = 0;
    memset(ck,0,sizeof ck);
    string ans = "";
    for(char &c:s){
        if(ck[c-'A']){
            ans+=c;
            ck[c-'A'] = 0;
            cnt--;
        }
        else{
            ck[c-'A'] = 1;
            cnt++;
        }
    }
    //for(auto i:ck)
    //    cout<<i<<endl;
    if(cnt>1){
        cout<<"NO SOLUTION\n";
        return;
    }

    cout<<ans;
    for(char i = 'A';i<='Z';i++)
        if(ck[i-'A']){
            cout<<i;
            break;
        }
    reverse(ans.begin(),ans.end());
    cout<<ans;

}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    solve();
    //main();
    return 0;
}

