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
    cin>>n>>m; 
    vil price(n),mprice(m);
    for(i=0;i<n;i++) cin>>price[i];
    for(i=0;i<m;i++) cin>>mprice[i];
     sort(price.begin(),price.end());
     //sort(mprice.begin(),mprice.end());
     multiset<ll> st;
     for(i=0;i<n;i++) st.insert(price[i]);
     vil ans(m,-1);
     for(i=0;i<m;i++)
     {
         ll u= mprice[i];
         auto it = st.lower_bound(u);
         if(st.size()==0) break;
         if(*it==u)
         {
            ans[i]=*it;
            st.erase(it);
         }
         else if(it!=st.begin())
         {
             it--;
             ans[i]=*it;
            st.erase(it);
         }
     }
     for(i=0;i<m;i++) cout<<ans[i]<<endl;
    
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
