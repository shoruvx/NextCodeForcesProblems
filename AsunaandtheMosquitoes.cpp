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
    vector <int> a(n);
    long long ans = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ans += a[i]; cnt += (a[i] & 1);
    }
    if (!cnt || cnt == n) {
        cout << *max_element(a.begin(), a.end()) << '\n';
    } else {
        cout << ans - cnt + 1 << '\n';
    }
}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}