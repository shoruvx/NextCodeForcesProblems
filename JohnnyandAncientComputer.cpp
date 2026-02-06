#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i,a,b) for(int i = a; i < b; i++)
#define rfr(i,a,b) for(int i = a - 1; i >= b; i--)
#define in(v,n)  vi v(n); fr(i,0,n) cin>>v[i];
#define out(v) do { for (auto x : v) cout << x << ' '; cout << '\n'; } while(0)
#define yes cout<<"YES"<<'\n'
#define no cout<<"-1"<<'\n'
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef unordered_map<int,int> mi;

string bin(int n)
{
	string s = "";

	while (n > 0)
	{
		int temp = n % 2;
		s.pb((char)temp + '0');
		n /= 2;
	}

	reverse(all(s));
	return s;
}

void solve()
{
    int a,b; cin >> a >> b;

    string sA = bin(a);
    string sB = bin(b);

    int diff = sA.size() - sB.size();
    diff = abs(diff);
    int temp = diff;

    if (sA.size() < sB.size())
    {
    	while(diff--)
    	{
    		sA.pb('0');
    	}
    }
    else
    {
    	while(diff--)
    	{
    		sB.pb('0');
    	}
    }

    if(sA == sB)
    {
    	int ans = temp / 3 + (temp % 3 != 0);
    	cout << ans << endl;
    }
    else
    {
    	no;
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}