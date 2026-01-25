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
#define pb push_back
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;

void solve()
{
    int n; cin >> n;
    in(a,n);
    in(b,n);

    map<int,int> m;

    fr(i,0,n)
    {
    	m[a[i]]++;
    }

    vip vp;

    for (auto x : m)
    {
    	vp.pb(make_pair(x.first, x.second));
    }

    sort(rall(vp));

    vi pref;

    int sum = 0;

    for (auto x : vp)
    {
    	sum += x.second;
    	pref.pb(sum);
    }

    vi prefMons;
    sum = 0;

    fr(i,0,n)
    {
    	sum += b[i];
    	prefMons.pb(sum);
    }

    int res = 0;

    int lastClr = 0;

    int cleared = 0;

    // cout << endl;

    int j = 0;

    for(auto x : vp)
    {
    	
    	for (int i = lastClr; i < n; i++)
    	{
    		if (pref[j] >= prefMons[i])
	    	{
	    		
	    		cleared++;
	    		res = max(res, (cleared) * x.first);
	    	}
	    	else
	    	{
	    		lastClr = i;
	    		break;
	
	    	}
    	}
    	

    	j++;
    }

    cout << res << endl;

    // for (auto x : pref)
    // {
    // 	cout << x << " ";
    // }
    // cout << endl;
    // for (auto x : prefMons)
    // {
    // 	cout << x << " ";
    // }

    // cout << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}