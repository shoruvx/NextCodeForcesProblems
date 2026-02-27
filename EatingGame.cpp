#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define frr(n) for(int i = 0; i < n; i++)
#define rfrr(n) for(int i = n-1; i >= 0; i--)
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define out(v) do { for (auto x : v) cout << x << ' '; cout << '\n'; } while(0)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

void solve()
{
    int n; cin >> n;
    in(v,n);

    set<int> ans;
    int sum = 0;

    frr(n)
    {
    	sum += v[i];
    }

    frr(n)
    {
    	vi temp = v;
    	int j = i;
    	int tempSum = 0;

    	while(1)
    	{

    		if (temp[j%n] != 0)
    		{
    			--temp[j%n];
    			++tempSum;
    		}

    		if (tempSum == sum)
	    	{
	    		ans.insert((j%n)+ 1);
	    		break;
	    	}

    		j++;
    	}

    	

    }

    cout << ans.size() << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}