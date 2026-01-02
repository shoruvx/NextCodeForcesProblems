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
    int n,d; cin >> n >> d;
    in(v,n);

    sort(all(v));

    int start = 0, end = n - 1;

    int count = 0;
    int st = 2;

    // for (auto x : v) cout << x << " ";
    // cout << endl;

    for (int i = n - 1; i >= 0; i--)
    {
    	if (v[i] > d)
    	{
    		count++;
    		end--;
    	}

    	if (v[i] < d)
    		break;
    }

    while (start < end)
    {
    	if (v[end]*st > d)
    	{
    		end--;
    		start++;
    		st = 2;
    		count++;
    	}
    	else
    	{
    		start++;
    		st++;
    	}
    }

    cout << count << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}