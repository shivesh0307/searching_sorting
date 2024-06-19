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
    vil w(n);
    for(i=0;i<n;i++) cin>>w[i];
    //sort(w.begin(),w.end());
    vil done(n,0); set<pair<ll,ll>> not_done;
    for(i=0;i<n;i++) not_done.insert({w[i],i});
    ll cnt=0;
    for(i=0;i<n;i++)
    {
        if(!done[i])
        {
            ll uw= w[i];
            not_done.erase({w[i],i});
            auto it= not_done.lower_bound({x-uw,-1});
            done[i]=1;
            if((*it).first==(x-uw) && not_done.size())
            {
                done[(*it).second]=1;
                not_done.erase(it);
                //cout<<i<<endl;
                //cout<<(*it).first<< " "<<(*it).second<<endl;
            }
            else if(it!=not_done.begin() && not_done.size())
            {
               it--;
                done[(*it).second]=1;
                not_done.erase(it);
            }
            cnt++;
           // cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;
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
