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
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

void solve()
{
    int n, k; cin >> n >> k;
    
    vi pref[3];

    frr(3)
    {
    	int s = 0;
    	pref[i].pb(0);

    	fr(j,0,n)
    	{
    		int x; cin >> x;

    		if ((s | x) != s)
    		{
    			s |= x;
    			pref[i].pb(s);
    		}
    	}
    }


    for (auto it : pref[0])
    {
    	for(auto it2 : pref[1])
    	{
    		for (auto it3 : pref[2])
    		{
    			if ( (it | it2 | it3) == k)
    			{
    				yes;
    				return;
    			}
    		}
    	}
    }

    no;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}