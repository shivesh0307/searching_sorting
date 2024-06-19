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
bool pos(ll mid, vil &arr, ll k)
{
    ll cnt=1; ll sm=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>mid) return 0;
        
        if(sm+arr[i]>mid)
        {
            cnt++;
            sm=arr[i];
        }
        else
        sm+=arr[i];
        
    }
    return cnt<=k;
}
ll solve() {
    ll i, j; 
    cin>>n>>k;
    vil arr(n);
    for(i=0;i<n;i++) cin>>arr[i];
    ll l=1; ll h=1e16;  ll ans=h;
    while(l<=h)
    {
        ll mid=l+(h-l)/2;
        if(pos(mid,arr,k))
        {
            ans=min(ans,mid);
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
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
