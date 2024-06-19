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
ll n, m ,k,x,y ;

ll solve() {
    ll i, j; 
   cin>>n; 
   vector<vector<ll>> arr;
   vector<ll> temp(3);
   ll room =1; 
   multiset<pair<ll,ll>> st;
   for(i=0;i<n;i++)
   {
       cin>>temp[0]>>temp[1]; 
       temp[2]=i; 
       arr.push_back(temp);
   }
   sort(arr.begin(),arr.end());
   x=arr[0][0]; y=arr[0][1]; 
   st.insert({y,arr[0][2]});
   vector<ll> ans(n); ans[arr[0][2]]=room;
   for(i=1;i<n;i++)
   {
       x=arr[i][0]; y=arr[i][1];
       auto it = st.begin();
       if((*it).first<x)
       {
           ans[arr[i][2]]=ans[(*it).second];
           st.erase(it);
           st.insert({y,arr[i][2]});
       }
       else
       {
           room++; 
           ans[arr[i][2]]=room;
           st.insert({y,arr[i][2]});
       }
   }
   cout<<room<<endl;
    for(i=0;i<n;i++) cout<<ans[i]<<" ";
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
