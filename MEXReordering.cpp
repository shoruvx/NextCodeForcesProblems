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

    sort(all(v));

    
    vi pref;
    vi suff;

    int right = 0;
    int left = 0;

    while (right < n-1)
    {
    	fr(i,0,n+1)
    	{
    		if (find(v.begin(), v.begin() + right + 1,i) == v.begin()+right+1)
    		{
    			pref.push_back(i);
    			right++;
    			break;
    		}
    	}
    }

    right = 0;

    while (right < n-1)
    {
    	fr(i,0,n+1)
    	{
    		if (find(v.begin() +right+1, v.end(),i) == v.end())
    		{
    			suff.push_back(i);
    			right++;
    			break;
    		}
    	}
    }

    // for (auto x : pref)
    // {
    // 	cout << x << " ";
    // }

    // cout << endl;

    // for (auto x : suff)
    // {
    // 	cout << x << " ";
    // }

    // cout << endl;

    for (int i = 0; i < suff.size(); i++)
    {
    	if (suff[i]==pref[i])
    	{
    		no;
    		return;
    	}
    }

    yes;


}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}