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
    int n,q; cin >> n >> q;

    in(a,n);
    in(b,n);

    a[n-1] = max(a[n-1], b[n-1]);

    for (int i = n - 2; i >= 0; i--)
    {
    	int temp = a[i];

    	if (a[i+1] >= b[i])
    	{
    		temp = a[i+1];
    	}
    	else
    	{
    		temp = b[i];
    	}

    	a[i] = max(a[i], temp);
    }


    vi pref;

    int sum = 0;

    fr(i,0,n)
    {

    	sum += a[i];
    	pref.pb(sum);
    }

    while (q--)
    {
    	int x, y;
    	cin >> x >> y;

    	if (x == 1)
    	{
    		cout << pref[y-1] << " ";
    	}
    	else
    	{
    		cout << pref[y-1] - pref[x-2] << " ";
    	}


    }

    // cout << endl;

    // for (auto x : pref)
    // {
    // 	cout << x << " ";
    // }

    cout << endl;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}