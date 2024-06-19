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
ll n, m ,k,x,y,t ;

ll solve() {
    ll i, j; 
   cin>>n>>t; 
   vil tim(n);
   for(i=0;i<n;i++) cin>>tim[i];
   ll low=1 ; ll high=1e18;
   ll ans=high;
   while(low<=high)
   {
       ll mid=low+(high-low)/2;
       ll cnt=0;
       for(i=0;i<n;i++)
       {
           cnt+=mid/tim[i];
           if(cnt>=t) break; 
       }
       if(cnt>=t)
       {
           ans=min(ans,mid);
           high=mid-1;
       }
       else
       {
           low=mid+1;
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
