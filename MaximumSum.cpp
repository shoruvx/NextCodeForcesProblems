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
    int sum = 0, n, k; cin >> n >> k;

    vi v(n);

    fr(i,0,n)
    {
    	cin >> v[i];
    	sum += v[i];
    }

    sort(all(v));
    int start = 0, end = n-1;

    while(k--)
    {
    	if (start >= end)
    	{
    		sum -= v[end];
    		end--;
    	}
    	else if (v[start] + v[start+1] < v[end])
    	{
    		sum -= (v[start] + v[start+1]);
    		start += 2;
    	}
    	else
    	{
    		sum -= v[end];
    		end--;
    	}
    }

    cout << sum << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}