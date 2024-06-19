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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// Define ordered set with PBDS
template<class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll n, m,k;
ll solve() {
    ll i, j; 
    cin>>n>>k;
    vector<pair<ll,ll>> arr(n);
    for(i=0;i<n;i++) cin>>arr[i].second>>arr[i].first;
    sort(arr.begin(),arr.end());
    multiset<ll> st; 
    for(i=0;i<k;i++) st.insert(0);
    ll cnt=0;
    for(i=0;i<n;i++)
    {
        auto it =st.upper_bound(arr[i].second);
        if(it==st.begin()) continue;
        
        it--; st.erase(it);
        cnt++;
        st.insert(arr[i].first);
    }
    cout<<cnt;
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
