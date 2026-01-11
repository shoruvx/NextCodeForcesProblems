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

    vector<pair<int,int>> vp;

    fr(i,1,n+1)
    {
    	int x;
    	cin >> x;
    	vp.push_back(make_pair(x,i));
    }

    sort(all(vp));

    for(int i = 0; i < 3; i++)
    {
    	cout << vp[i].second << " ";
    }
    cout << endl;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}