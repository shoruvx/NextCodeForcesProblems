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

    vector<string> vs;

    fr(i,0,n)
    {
    	string s; cin >> s;
    	vs.push_back(s);
    }


    string ans = "";
    ans += vs[0];

    fr(i,1,n)
    {
    	string temp1 = ans + vs[i];   
    	string temp2 = vs[i] + ans;

    	ans = min(temp1,temp2);
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