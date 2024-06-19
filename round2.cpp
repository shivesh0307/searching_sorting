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
    vector<ll> arr(n+1);
  vil positions(n+1,-1);
  for(i=1;i<=n;i++) 
   {
       cin>>arr[i]; positions[arr[i]]=i;
   }
   ll round=1;
    for(i=2;i<=n;i++)
    {
        if(positions[i]<positions[i-1])
        round++;
        
    }
    for(j=0;j<m;j++)
    {
        ll pos1,pos2; cin>>pos1>>pos2;
        set<pair<ll,ll>> st;
        if(arr[pos1]-1>=1)
        {
            st.insert({arr[pos1]-1,arr[pos1]});
        }
        if(arr[pos1]+1<=n)
        {
            st.insert({arr[pos1],arr[pos1]+1});
        }
        if(arr[pos2]-1>=1)
        {
            st.insert({arr[pos2]-1,arr[pos2]});
        }
        if(arr[pos2]+1<=n)
        {
            st.insert({arr[pos2],arr[pos2]+1});
        }
        for(auto swapped : st)
        {
            if(positions[(swapped).first]>positions[(swapped).second])
            round-=1;
        }
        swap(arr[pos1],arr[pos2]);
        positions[arr[pos1]]=pos1;
        positions[arr[pos2]]=pos2;
         for(auto swapped : st)
        {
            if(positions[(swapped).first]>positions[(swapped).second])
            round+=1;
        }
        cout<<round<<endl;
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
