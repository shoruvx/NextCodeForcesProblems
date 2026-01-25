#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"Bob"<<'\n'
#define no cout<<"Alice"<<'\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;

void solve()
{
    int n; cin >> n;

    string s; cin >> s;

    string s1 = s;
    sort(all(s1));

    if (s == s1)
    {
    	yes;
    	return;
    }


    vi ans;
    fr(i,0,n)
    {
    	if(s[i] != s1[i])
    	{
    		ans.push_back(i+1);
    	}
    }

    no;
    cout << ans.size() << endl;

    for (auto x : ans)
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