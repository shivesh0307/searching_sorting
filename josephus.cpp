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
ll n, m ,k,x ;
// Main solving function
ll solve() {
    ll i, j; 
   cin>>n; k=1; 
   oset<ll> st;
   for(i=1;i<=n;i++) st.insert(i);
   ll p =k%n;
   //cout<<*(st.find_by_order(0))<<endl;
   //cout<<*(st.find_by_order(1))<<endl;
   while(st.size())
   {
       ll r= *(st.find_by_order(p));
       st.erase(r);
       cout<<r<<" ";
       if(st.size())
       {
           p=(p+k)%st.size();
       }
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
