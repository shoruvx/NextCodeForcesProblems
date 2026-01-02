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
    in(v1,n);

    vi inA(2 * n + 1, 0);
    vi inB(2 * n + 1, 0);

    int count = 1;

    fr(i,1,n)
    {
    	if (v[i-1]==v[i])
    	{
    		count++;
    	}
    	else
    	{
    		inA[v[i-1]] = max(inA[v[i-1]], count);
    		count = 1;
    	}
    }

    
    inA[v[n-1]] = max(inA[v[n-1]], count);
    count = 1;

    fr(i,1,n)
    {
    	if (v1[i-1]==v1[i])
    	{
    		count++;
    	}
    	else
    	{
    		inB[v1[i-1]] = max(inB[v1[i-1]], count);
    		count = 1;
    	}
    }

    inB[v1[n-1]] = max(inB[v1[n-1]], count);

    int ans = 0;

    fr(i,0,inA.size())
    {
    	ans = max(ans,inA[i]+inB[i]);
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