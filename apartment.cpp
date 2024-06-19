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

ll n, m ,k ;
// Main solving function
ll solve() {
    cin>>n>>m>>k;
    vil a(n);
    vil b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll j=0;j<n;j++) cin>>b[j];
    ll i=0,j=0;
    ll cnt=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i<n && j<m)
    {
        ll low= a[i]-k;
        ll high=a[i]+k;
        if(b[j]>=low && b[j]<=high)
        {
            cnt++; i++; j++;
        }
        else if (b[j]<low) {
            j++;
        }
        else
        {
            //b[j]>high
            i++;
        }
    }
    cout<<cnt;
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
