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

    vi temp;

    fr(i,0,n)
    {
    	temp.push_back(i+1);
    }

    int idx = -1;

    fr(i,0,n)
    {
    	if (v[i] != temp[i])
    	{
    		idx = i;
    	}
    }

    if (idx == -1)
    {
    	cout << 0 << endl;
    }
    else
    {
    	cout << v[idx] << endl;
    }
}

int32_t main()
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}