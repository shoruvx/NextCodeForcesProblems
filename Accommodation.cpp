#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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
typedef unordered_map<int,int> mi;

void solve()
{
    int b,g,x,y,n; cin >> b >> g >> x >> y >> n;

    int temp = ((b+g) + 1) / n;

    vi v(temp, 0);

    if (x + y > n)
    {
    	cout << -1 << endl;
    	return;
    }

    fr(i,0,v.size())
    {
    	if (b < 0 || g < 0)
    	{
    		cout << -1 << endl;
    		return;
    	}

    	b -= x;
    	g -= y;

    	v[i] = (x + y);
    }

    fr(i,0,v.size())
    {
    	if (b <= 0)
    	{
    		break;
    	}

    	b -= max(0ll,n - v[i]);

    	v[i] += max(0ll,n - v[i]);
    }

    fr(i,0,v.size())
    {
    	if (g <= 0)
    	{
    		break;
    	}

    	g -= max(0ll,n - v[i]);

    	v[i] += max(0ll,n - v[i]);
    }

    if (b > 0 || g > 0)
    {
    	cout << -1 << endl;
    	return;
    }

    int count = 0;

    fr(i,0,v.size())
    {
    	if (v[i] != 0)
    	{
    		count++;
    	}
    }

    // out(v);

    cout << count << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}