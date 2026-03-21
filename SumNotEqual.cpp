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
#define no cout<<-1<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

void solve()
{
	int n; cin >> n;
    vip vp;

    frr(n)
    {
    	int x; cin >> x;
    	vp.pb(mp(x,i));
    }

    sort(all(vp));

    int found = 0;

    fr(i,1,n-1)
    {
    	if (vp[i].first != (vp[0].first + vp[n-1].first))
    	{
    		cout << vp[n-1].second + 1<< " " << vp[0].second + 1<< " " << vp[i].second +1 << endl;
    		return;
    	}

    }

    fr(i,2,n)
    {
    	if (vp[i].first != (vp[0].first + vp[1].first))
    	{
    		cout << vp[1].second + 1<< " " << vp[0].second + 1<< " " << vp[i].second +1 << endl;
    		return;
    	}

    }

    rfr(i,n-2,0)
    {
    	if (vp[i].first != (vp[n-1].first + vp[n-2].first))
    	{
    		cout << vp[n-1].second + 1<< " " << vp[n-2].second + 1<< " " << vp[i].second +1 << endl;
    		return;
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