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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int ans = k;

    int white = 0;

    fr(i,0,k)
    {
    	if(s[i]=='W')
    	{
    		white++;
    	}
    }

    ans = min(ans,white);

    int start = 0;


    fr(i,k,n)
    {
    	if(s[start]=='W')
    	{
    		white--;
    	}

    	if(s[i]=='W')
    	{
    		white++;
    	}

    	ans = min(ans,white);
    	start++;
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