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

    unordered_map<int, int> m;

    fr(i,0,n)
    {
    	m[v[i]]++;
    }

    for (auto x : m)
    {
    	if (x.second==1)
    	{
    		cout << -1 << endl;
    		return;
    	}
    }

    
    vi ans;
    fr(i,0,n)
    {
    	ans.push_back(i+1);
    }

    int left = 0, right = 0;

    while(right < n)
    {
    	if(v[left]==v[right])
    	{
    		right++;
    	}
    	else
    	{
    		rotate(ans.begin()+left, ans.begin()+left+1, ans.begin()+right);
    		left = right;
    	}
    }

    rotate(ans.begin()+left, ans.begin()+left+1, ans.begin()+right);

    for(auto x : ans)
   	{
   		cout << x << " ";
   	}

   	cout << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}