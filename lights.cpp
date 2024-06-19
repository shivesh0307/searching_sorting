#include <bits/stdc++.h>
using namespace std;

#define PRIME 1000000007
#define MOD 1000000009
#define endl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long int
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define sz(c) c.size()
#define r(i, a, b) for(i = a; i < b; i++)
#define ra(i, a, b) for(i = a; i <= b; i++)
#define vi vector<int>
#define vil vector<ll>

ll n, m ,k,x ;
// Main solving function
ll solve() {
    ll i, j; 
    cin>>x>>n;
    set<pair<ll,ll>> st; st.insert({0,x});
    multiset<ll,greater<int>> len; len.insert(x);
    for(i=0;i<n;i++)
    {
        ll pos; cin>>pos;
        auto it = st.lower_bound({pos,-1}); it--;
        if((*it).first!=pos)
        {
              ll l1=(*it).first;
              ll h1=pos;
              ll l2 = h1;
              ll h2 = (*it).second;
              ll length=h2-l1; 
              st.erase(it);
              st.insert({l1,h1});
              st.insert({l2,h2});
              len.erase(len.find(length));
              len.insert(h1-l1);
              len.insert(h2-l2);
              
        }
        cout<<(*(len.begin()))<<endl;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
