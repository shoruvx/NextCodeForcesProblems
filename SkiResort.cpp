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
    int n,k,q; cin >> n >> k >> q;

    in(v,n);

    vi cons;

    int count = 0;

    fr(i,0,n)
    {
    	if (v[i]<=q)
    	{
    		count++;
    	}
    	else
    	{
    		cons.push_back(count);
    		count = 0;
    	}
    }
    cons.push_back(count);

    int sum = 0;

    for (auto x : cons)
    {
    	int temp = x - k + 1;
    	if (temp > 0)
    		sum += temp * (temp + 1) / 2;
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