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
    string s; cin >> s;
    int n = sz(s);

    fr(i,0,n)
    {
    	if ((s[i]-'0') % 8 == 0)
    	{
    		yes;
    		cout << s[i] << endl;
    		return;
    	}
    }

	fr(i,0,n)
	{
		fr(j,i+1,n)
		{
			int num = (s[i] - '0') * 10 + (s[j]-'0');

			if (num % 8 == 0)
			{
				yes;
				cout << num << endl;
				return;
			}
		}
	}

    if (n >= 3)
    {
    	fr(i,0,n)
    	{
    		fr(j,i+1,n)
    		{

    			fr(k,j+1,n)
    			{

    				int num = (s[i] - '0') * 100 + (s[j]-'0') * 10 + (s[k]-'0');

	    			if (num % 8 == 0)
	    			{
	    				yes;
	    				cout << num << endl;
	    				return;
	    			}

    			}
    			
    		}
    	}
    }

    no;
}

int32_t main() 
{
    fastio;

	solve();

    return 0;
}