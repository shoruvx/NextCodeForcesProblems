#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define frr(n) for(int i = 0; i < n; i++)
#define rfrr(n) for(int i = n-1; i >= 0; i--)
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define out(v) do { for (auto x : v) cout << x << ' '; cout << '\n'; } while(0)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,char>> vip;
typedef unordered_map<int,int> mi;

void solve()
{
    int r,g,b; cin >> r >> g >> b;
    vip vp;
    string ans = "";

    vp.pb(mp(r,'R'));
    vp.pb(mp(g,'G'));
    vp.pb(mp(b,'B'));

    sort(rall(vp));

    
    while (vp[0].first && vp[1].first)
    {
    	ans += vp[0].second;
    	vp[0].first--;
    	ans += vp[1].second;
    	vp[1].first--;

    }

    while (vp[0].first && vp[2].first)
    {
    	ans += vp[0].second;
    	vp[0].first--;
    	ans += vp[2].second;
    	vp[2].first--;

    }

    cout << ans << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}