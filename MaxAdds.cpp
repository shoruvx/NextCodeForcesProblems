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
    int n,m; cin >> n >> m;

    in(vA,n);
    in(vB,n);

    auto maX = max_element(all(vA));

    int maxVal = *maX;

    vi suff(n);

    int sum = 0;

    for(int i = n-1; i >= 0; i--)
    {
    	sum += vB[i];
    	suff[i] = sum;
    }


    int ans = 0;

    fr(i, 1, m+1)
    {
    	int y = i;

    	fr(j,0,n)
    	{
    		// if (y >= maxVal && j == 0)
    		// {
    		// 	y += suff[j];
    		// 	ans += y;

    		// 	ans += (((m + i) / 2) * ((m - i)+1) + (((m - i)+1) * suff[0]));
    		// 	cout << ans << endl;
    		// 	return;
    		// }

    		if (y >= maxVal)
    		{
    			y += suff[j];
    			break;
    		}

    		y = max(y + vB[j], vA[j]);
    	}

    	ans += y;
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