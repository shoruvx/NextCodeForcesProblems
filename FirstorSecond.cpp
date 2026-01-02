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
    in(v,n);
    vi pref(n + 1), suff(n);

    fr(i,1,n)
    {
    	pref[i + 1] = pref[i] + abs(v[i]);
    }

    for(int i = n - 1; i >= 1; i--) 
	{
		suff[i - 1] = suff[i] - v[i];
	}
 
    int ans = suff[0];
    fr(i,1,n) 
	{
		ans = max(ans, v[0] + pref[i] + suff[i]);
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