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
#define INT LLONG
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

void factors(set<int> &v,int n)
{

	fr(i,1,sqrt(n)+1)
	{
		if (n % i == 0)
		{
			v.insert(i);

			v.insert(n / i);		
		}
	}

}

void solve()
{
    int n; cin >> n;
    in(v,n);

    if (n < 2)
    {
    	cout << 0 << endl;
    	return;
    }

    set<int> fact;

    factors(fact,n);

    vi prefSum;
    int sum = 0;

    fr(i,0,n)
    {
    	sum += v[i];
    	prefSum.pb(sum);
    }

    
    int diff = 0;

    for(auto x : fact)
    {
    	int minVal = LLONG_MAX;
    	int maxVal = LLONG_MIN;
    	int prevSum = 0;

    	for(int i = x - 1; i < n; i += x)
    	{
    		int temp;

    		temp = prefSum[i] - prevSum;
    		minVal = min(minVal, temp);
    		maxVal = max(maxVal, temp);
    		prevSum = prefSum[i];

    	}


    	diff = max(diff, maxVal - minVal);
    }


    cout << diff << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}