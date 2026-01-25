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
#define pb push_back
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;

void solve()
{
    int n,h,l; cin >> n >> h >> l;
    in(v,n);

    int maxR = max(h,l);
    int maxL = min(h,l);

    vi temp;

    fr(i,0,n)
    {
    	if (v[i] <= maxR || v[i] <= maxL)
    	{
    		temp.pb(v[i]);
    	}
    }

    sort(all(temp));

    int start = 0, end = temp.size() - 1;
    int count = 0;

    while(start < end)
    {
    	if (temp[start] <= maxL)
    	{
    		count++;
    		end--;
    	}

    	start++;
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