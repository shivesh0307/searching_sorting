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
    cin>>n;
    vil arr(n);
    multiset<ll> st;
    for(i=0;i<n;i++)
    {
        cin>>arr[i]; //st.insert(arr[i]);
    }
    ll tower=1; st.insert(arr[0]);
    
    for(i=1;i<n;i++)
    {
      auto it = st.upper_bound(arr[i]);
      if(it==st.end())
      {
         tower++; st.insert(arr[i]);
      }
      else
      {
            st.erase(it);
            st.insert(arr[i]);
      }
    }
    cout<<tower<<endl;
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
