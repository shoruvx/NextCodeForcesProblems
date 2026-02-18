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
    int n; cin >> n;
    in(p,n);
    in(a,n);
    vi tempP = p;


    // forward

    if (p[0] != a[0])
    {
    	if (a[0] == p[1])
    	{
    		p[0] = p[1];
    	}
    }

    int prev = p[0];
    int next = p[2];

    fr(i,1,n-1)
    {
    	if (a[i] != p[i])
    	{
    		if(a[i]== prev)
    		{
    			p[i] = prev;
    		}
    		else if (a[i] == next)
    		{
    			p[i] = next;
    			prev = next;
    		}
    		else
    		{
    			break;
    		}
    	}
    	prev = p[i];
    	next = p[i+1];
    }

    if (p[p.size() - 1] != a[a.size() - 1])
    {
    	if (a[a.size() - 1] == prev)
    	{
    		p[p.size() - 1] = prev;
    	}
    }

    // reverse

    if (p[p.size() - 1] != a[a.size() - 1])
    {
    	if (a[a.size() - 1] == p[p.size() - 2])
    	{
    		p[p.size() - 1] = p[p.size() - 2];
    	}
    }

    prev = p[p.size() - 1];
    next = p[p.size() - 3];

    rfr(i,n-2,1)
    {
    	if (a[i] != p[i])
    	{
    		if(a[i] == prev)
    		{
    			p[i] = prev;
    		}
    		else if (a[i] == next)
    		{
    			p[i] = next;
    		}
    		else
    		{
    			break;
    		}
    	}
    	prev = p[i];
    	next = p[i-1];
    }

    if (p[0] != a[0])
    {
    	if(a[0]==prev)
    	{
    		p[0] = prev;
    	}
    }




    // if (a == p || a == tempP)
    // {
    // 	yes;
    // }
    // else
    // {
    // 	no;
    // }

    out(p);
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}