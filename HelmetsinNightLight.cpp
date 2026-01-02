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
    int n, p; cin >> n >> p;

    in(v1,n);
    in(v2,n);


    vector<pair<int, int>> vp;

    fr(i,0,n)
    {

    	vp.push_back(make_pair(v2[i],v1[i]));
    }

    sort(all(vp));

    int cost = 0;
    int i = 0;
    cost += p;
    n -= 1;

    while(n > 0 && vp[i].first <= p)
    {
    	while(vp[i].second-- && n > 0)
    	{
    		cost += vp[i].first;
    		n--;	
    	}

    	i++;
    }

    fr(i,0,n)
    {
    	cost += p;
    }

    cout << cost << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}