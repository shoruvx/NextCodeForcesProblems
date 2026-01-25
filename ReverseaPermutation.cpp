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

    vi v, revV;

    map<int, int> m;

    fr(i,0,n)
    {
    	int x;
    	cin >> x;

    	v.pb(x);

    	m[x] = i;
    }

    int temp = n;
    fr(i,0,n)
    {
    	revV.pb(n-i);
    }

    // reverse(all(revV));

    int idx = -1;


    fr(i,0,n)
    {
    	if(v[i] < revV[i])
    	{
    		idx = i;
    		break;
    	}
    }

    if (idx != -1)
    {
    	int end = m[n - idx];

    	reverse(v.begin()+idx, v.begin()+end+1);
    }

    for (auto x : v)
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