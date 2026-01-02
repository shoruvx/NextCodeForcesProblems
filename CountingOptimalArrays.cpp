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

int pow(int x, int y)
{
	int ans = 1;

	fr(i,0,y)
	{
		ans *= x % 998244353;
	}

	return ans;
}

void solve()
{
    int n, m; cin >> n >> m;

    if (n==1)
    {
    	cout << m + 1 << endl;
    	return;
    }

    int bit = 0;

    int temp = m;
    while (temp >= 1)
    {
    	bit++;
    	temp /= 2;
    }

    int exp = pow(2,bit);
    --exp;

    cout << m - (exp - (m+1)) << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}