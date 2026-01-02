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

    if(n <= 2)
    {
    	cout << -1 << endl;
    	return;
    }

    vector<vector<int>> arr(n, vector<int>(n));

	if (n >= 3)
    {

    	fr(i,0,n)
	    {
	    	fr(j,0,n)
	    	{
	    		if (i == 0 && j != n-1)
	    		{
	    			arr[i][j]=1;
	    		}

	    		else if (j == n-2)
	    		{
	    			arr[i][j]=1;
	    		}

	    		else
	    		{
	    			arr[i][j]=0;
	    		}
	    	}
	    }

	    for(int i = 0; i < 3; i++)
	    {
	    	arr[n-1-i][n-1] = 1;
	    }

	    fr(i,0,n)
	    {
	    	fr(j,0,n)
	    	{
	    		cout << arr[i][j] << " ";
	    	}

	    	cout << endl;
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