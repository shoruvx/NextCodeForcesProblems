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


mi factor(int x, mi& m)
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			while (x % i == 0)
			{
				m[i]++;

				x /= i;
			}
		}
	}

	if (x > 1) m[x]++;

	return m;
}

int cnt = 1;


void solve()
{
    int n; cin >> n;
    mi m;

    frr(n)
    {
    	factor(i+1, m);
    }

    cout << "Case " << cnt << ": " << n << " = ";

    int size = sz(m);

    for (auto x : m)
    {
    	cout << x.first << " (" << x.second << ") ";

    	if (size >= 2)
    	{
    		cout << "* ";
    	}
    	size--;
    }
    cout << endl;
    cnt++;

    // cout << m.size() << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}