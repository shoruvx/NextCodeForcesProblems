#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n; cin >> n;

    int ans = 0;

    vector<int> vp;
    vector<int> vRev;

    while(n--)
    {
    	int m; cin >> m;

    	in(v,m);
    	sort(all(v));

    	ans += v[1];
    	vp.push_back(v[1]);
    	vRev.push_back(v[0]);
    }

    sort(all(vp));
    sort(all(vRev));

    ans -= vp[0];
    ans += vRev[0];

    cout << ans << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}