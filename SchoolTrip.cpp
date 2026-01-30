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
    int n,x,k;

    cin >> n >> x >> k;

    int minVal = (x % k);

    int temp = (((x / k) + 1) * k) - x;

    if (temp + x >= n)
    {
    	cout << minVal << endl;
    	return;
    }

    cout << min(minVal,temp) << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}