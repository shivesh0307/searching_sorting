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
    cin>>n>>x;
    vector<pair<ll,ll>> timing(n);
    for(i=0;i<n;i++)
    cin>>timing[i].first>>timing[i].second;
    sort(timing.begin(),timing.end());
    priority_queue<ll> st;
    for(i=0;i<n;i++)
    {
        if(st.size() && st.top()>timing[i].first)
        {
            if(st.top()>timing[i].second)
            {
                st.pop();
            st.push(timing[i].second);
            }
        }
        else
        st.push(timing[i].second);
    }
    cout<<st.size();
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
