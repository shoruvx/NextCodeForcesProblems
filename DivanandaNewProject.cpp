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

    vip vp;
    fr(i,0,n)
    {
    	int x; cin >> x;
    	vp.pb(make_pair(x,i));
    }

    sort(rall(vp));

    vi ans(n+1);
    ans[0] = 1;

    int counter = 1;
    int sum = 0;

    fr(i,0,n)
    {
    	if (i % 2 == 0)
    	{
    		ans[vp[i].second + 1] = 1 + counter;
    	}
    	else
    	{
    		ans[vp[i].second + 1] = 1 - counter;
    		counter++;
    	}

    }


    for(auto x : vp)
    {
    	sum += abs(1 - ans[x.second+1]) * x.first * 2;
    }

    cout << sum<<endl;

    for (auto x : ans)
    {
    	cout << x << " ";
    }

    cout << endl;
    
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}