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
    in(v,n);

    vi diff;
    int sum = 0;

    fr(i,1,n)
    {
    	int temp = abs(v[i-1] - v[i]);
    	diff.push_back(temp);
    	sum += temp;

    }

    int maxVal = max(diff[0],diff[diff.size()-1]);

    fr(i,1,diff.size())
    {
    	int x = (diff[i-1] + diff[i]) - abs(v[i-1] - v[i+1]);
    	maxVal = max(maxVal,x);
    }

    cout << sum - maxVal << endl;
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}