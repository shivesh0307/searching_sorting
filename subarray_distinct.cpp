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
    vil arr(n);
    for(i=0;i<n;i++) cin>>arr[i];
    map<ll,ll> mp;
    ll left=0,right=0;
    ll distinct=0; ll ans=0;
    for(;right<n;right++)
    {
        if(mp[arr[right]]==0)
        distinct++;
        mp[arr[right]]++;
        while(distinct>k)
        {
            mp[arr[left]]--;
            if(mp[arr[left]]==0)
            {
                distinct--;
            }
            left++;
        }
        ans+=right-left+1;
    }
    cout<<ans;
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
