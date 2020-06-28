#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    // n%4== 3 || 0
    if((n*(n+1)/2)%2==0)
    {
        vector<int> v1,v2;
        if(n%4==0){
            for(int i = 5;i<=n;i+=4){
                v1.push_back(i+0);
                v1.push_back(i+3);
                v2.push_back(i+1);
                v2.push_back(i+2);
            }
        }else{
            for(int i = 4;i<=n;i+=4){
                v1.push_back(i+0);
                v1.push_back(i+3);
                v2.push_back(i+1);
                v2.push_back(i+2);
            }
        }
        if(n%4==0){
            v1.push_back(1);
            v1.push_back(4);
            v2.push_back(2);
            v2.push_back(3);
        }else {
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
        }
        cout<<"YES\n";
        cout<<v1.size()<<endl;
        for(int i:v1) cout<<i<<" ";
        cout<<endl<<v2.size()<<endl;
        for(int i : v2) cout<<i<<" ";
        cout<<"\n";
    }
    else cout<<"NO\n";
    //main();
    return 0;
}
