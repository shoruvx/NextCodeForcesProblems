#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef map<int,int> mi;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int count = 0;

    fr(i,0,n)
    {
    	if (s[i]=='1')
    	{
    		count++;
    	}
    }

    if (n <= 2)
    {
    	cout << max(count, 1ll) << endl;
    	return;
    }

    fr(i,1,n-1)
    {
    	if (s[i]=='1')
    	{
    		s[i-1] = '1';
    		s[i+1] = '1';
    		i++;
    	}
    }

    if (s[0]=='1')
    {
    	s[1]='1';
    }
    if (s[n-1]=='1')
    {
    	s[n-2]='1';
    }

    fr(i,0,n-1)
    {
    	if(s[i]=='0')
    	{
    		count++;
    		s[i+1] = '1';
    		i += 2;
    	}
    }

    if (s[n-1] == '0' && s[n-2] == '0')
    {
    	count++;
    	s[n-1] = '1';
    }
    cout << count << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}