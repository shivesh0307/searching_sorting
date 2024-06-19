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
    
    priority_queue<ll> left; 
    priority_queue<ll,vector<ll>, greater<ll>> right; 
    for(i=0;i<k;i++)
    {
    left.push(arr[i]);
    }
    for(i=0;i<k/2;i++)
    {
     right.push(left.top());
     left.pop();
    }
    vil ans;
    if(k==1)
    {
        ans=arr;
    }
    else
    {
    ans.push_back(left.top());
    map<ll,ll> removed;
    for(i=k;i<n;i++)
    {
     ll balance=0; 
     removed[arr[i-k]]++;  //removed
     if(arr[i-k]<=left.top())
     balance--;
     else balance++;
     if(arr[i]<=left.top())
     {
     balance++;
     left.push(arr[i]);
     
     }
     else
     {
     balance--;
     right.push(arr[i]);
     }
     if(balance>0)
     {
         right.push(left.top()); 
         
         left.pop();
     }
     else if(balance<0)
     {
          left.push(right.top()); right.pop();
     }
     
     while(removed[left.top()])
     {
         removed[left.top()]--;
         left.pop();
     }
     while(removed[right.top()])
     {
         removed[right.top()]--;
         right.pop();
     }
     ans.push_back(left.top());
    }
    }
    for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
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
