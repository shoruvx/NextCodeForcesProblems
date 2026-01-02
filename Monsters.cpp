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
    int n,k; cin >> n >> k;

    vector<pair<int, int>> vp;

    fr(i,0,n)
    {
        int x; cin >> x;

        if (x % k == 0)
        {
            vp.push_back(make_pair(k,i+1)); 
        }
        else
        {
            vp.push_back(make_pair(x%k,i+1));
        }
    	
    }

    sort(vp.begin(), vp.end(), [&](pair<int, int>a, pair<int, int>b)
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });

    for (auto it : vp)
    {
    	cout << it.second << " ";
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