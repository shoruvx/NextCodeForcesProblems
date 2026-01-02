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
    int n,k,b,s; cin >> n >> k >> b >> s;

    vi ans(n);

    if (s < b * k)
    {
    	cout << - 1 << endl;
    	return;
    }

    int temp = k * (b + 1);

    if (s < temp)
    {
    	ans[n-1] = s;
    	s = 0;
    }
    else
    {
    	ans[n-1] = temp - 1;
    	s -= temp - 1;
    }


    for(int i = n - 2; i >= 0; i--)
    {
    	temp = k;
    	if (s < temp)
    	{
    		if (s <= 0)
    		{
    			ans[i] = 0;
    			s = 0;
    		}
    		else
    		{
    			ans[i] = s;
    			s = 0;
    		}
    		
    	}
    	else
    	{
    		ans[i] = temp - 1;
    		s -= temp - 1;
    	}
    }

    if (s > 0)
    {
    	cout << -1 << endl;
    	return;
    }

    for (auto x : ans)
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