#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
void solve()
{
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<pair<int,pair<int,vector<string>>>>v;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        vector<string>s;
        for(int i=0;i<l;i++){
            string st;
            cin>>st;
            s.push_back(st);
        }
        v.push_back(make_pair(l,make_pair(i,s)));
    }
    vector<pair<int,vector<int>>>ans;
    int i=0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    while(i+3<n && z>0){
        ans.push_back({4,{v[i].second.first,v[i+1].second.first,v[i+2].second.first,v[i+3].second.first}});
        z--;
        i+=4;
    }
    while(i+2<n && y>0){
        ans.push_back({3,{v[i].second.first,v[i+1].second.first,v[i+2].second.first}});
        y--;
        i+=3;
    }
    while(i+1<n && x>0){
        ans.push_back({2,{v[i].second.first,v[i+1].second.first}});
        x--;
        i+=2;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i.first<<" ";
        for(auto j:i.second)cout<<j<<" ";
        cout<<endl;
    }
}
signed main()
{
    freopen("b_little_bit_of_everything.in", "r", stdin); 
    freopen("b_little_bit_of_everything.txt", "w", stdout); 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}