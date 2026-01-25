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

    vi temp = v;
    sort(all(temp));
    int t = n;

    int count = 0;
    int profit = 0;
    int last = t - 1;

    fr(i,0,t)
    {

    	for(int j = t - 1; j >= 0; j--)
    	{
    		// if (v[j] != -1)
    		// {
    		// 	count++;
    		// }

    		if (v[j]==temp[last])
    		{
    			int point = min(2ll, n);

    			profit += point * v[j];
    			last--;

    			n -= point;

    			if (n < 0)
    			{
    				cout << profit << endl;
    				return;
    			}
    		}
    	}
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}