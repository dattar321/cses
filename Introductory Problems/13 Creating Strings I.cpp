#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string>ss;
    cin>>s;
    sort(s.begin(),s.end());
    ss.push_back(s);
    while(next_permutation(s.begin(),s.end())){
        ss.push_back(s);
    }
    cout<<ss.size()<<endl;
    for(auto i: ss)cout<<i<<endl;

}
