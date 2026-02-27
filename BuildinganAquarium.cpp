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
typedef unordered_map<int,int> mi;


void solve()
{
    int n, x; cin >> n >> x;
    in(v,n);

    sort(all(v));

    int start = 1;
    int end = 2e9 + 7;
    int ans = 1;

    while (start <= end)
    {
    	int mid = (start + end) / 2;

    	int currWater = 0;

    	frr(n)
    	{
    		if(v[i] < mid)
    		{
    			currWater += (mid - v[i]);
    		}
    		if (currWater > x) break;
    	}

    	if (currWater <= x)
    	{
    		ans = mid;
    		start = mid + 1;

    	}
    	else
    	{
    		end = mid - 1;
    	}
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