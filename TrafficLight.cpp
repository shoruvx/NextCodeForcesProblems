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
    char curr; cin >> curr;

    string s; cin >> s;

    int ans = 0;

    if (curr == 'g')
    {
    	ans = 0;
    }
    else
    {
    	vi currPos;

    	fr(i,0,n)
    	{
    		if (s[i]==curr)
    		{
    			currPos.push_back(i);
    		}
    	}

    	s += s;

    	int initial = 0;
    	int found = 0;

    	while(initial < currPos.size())
    	{
    		if (currPos[initial] > found)
    		{
    			found++;
    		}

    		else if(s[found]=='g')
    		{
    			ans = max(ans, found - currPos[initial]);
    			initial++;
    		}
    		else
    		{
    			found++;
    		}

    		
    	}

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