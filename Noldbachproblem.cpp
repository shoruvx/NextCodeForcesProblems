/* 
What are you staring at?
Comeback Loading.... 
*/

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
typedef vector<pair<int,int>> vip;
typedef map<int,int> mi;

vi sieve(int n)
{
	vi prime(n+1,1);
	prime[0] = prime[1] = 0;

	mi m;

	for(int i = 2; i * i <= n; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= n; j+=i)
			{
				prime[j] = 0;
			}
		}
	}

	vi ans;

	frr(n+1)
	{
		if (prime[i]) ans.pb(i);
	}

	return ans;

}

void solve()
{
    int n, k; cin >> n >> k;

    vi v = sieve(n);

    mi m;

    for (auto x : v)
    {
    	m[x]++;
    }

    fr(i,1,v.size())
    {
    	if (m.find(v[i]+v[i-1]+1) != m.end())
    	{
    		k--;
    	}
    }

    if (k > 0) no;
    else yes;
}

int32_t main() 
{
    fastio;

    int t = 1;
    while(t--) solve();

    return 0;
}