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
    int n, w; cin >> n >> w;

    vector<pair<int, int>> vp;

    fr(i,1,n+1)
    {
    	int x;
    	cin >> x;

    	vp.push_back(make_pair(x,i));
    }

    sort(all(vp));
    int cost = 0;

    int temp = 2 * w;

    while (count > 0)
    {
    	for (auto x : vp)
	    {
	    	if (((x.second + temp) % temp) < w)
	    	{
	    		cost += x.first;
	    		count--;
	    	}

	    }
    }
    

    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}