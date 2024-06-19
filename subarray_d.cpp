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

ll n, m ,k,x,y,t;

ll solve() {
    ll i, j; 
    cin >> n;
    vil arr(n);
    cin >> arr[0];
    for (i = 1; i < n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    map<ll, ll> mp;
    mp[0]++; // To handle subarrays starting from the beginning
    ll cnt = 0;
    
    for (i = 0; i < n; i++) {
        ll mod_value = arr[i] % n;
        if (mod_value < 0) mod_value += n; // Ensuring non-negative modulo result
        
        cnt += mp[mod_value];
        mp[mod_value]++;
    }
    
    cout << cnt << endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
