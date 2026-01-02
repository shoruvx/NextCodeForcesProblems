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
    in(cost,n);

    vi visited(n,0);
    int done = 0;

    int score = 0;

    vi dump;

    fr(i,0,n)
    {
    	dump.push_back(cost[i]);
    }

    sort(all(dump));

    int idx = 0;

    while(done < n)
    {

    	fr(i,0,n)
    	{

	    	if (dump[idx]==cost[i])
	    	{
	    		fr(j,i,n)
	    		{
	    			if(!visited[j])
	    			{
	    				score += cost[i] * v[j];
	    				done++;
	    				visited[j] = 1;
	    			}
	    		}
	    		idx++;
	    	}
    	}
    }

    cout << score << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}