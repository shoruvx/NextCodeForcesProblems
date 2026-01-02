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
    int n;
    string s;
    cin >> n >> s;

    set<char> st;
    vi pref(n + 1, 0);
    vi suff(n + 1, 0); 

    fr (i,0,n)
    {
        st.insert(s[i]);
        pref[i] = st.size();
    }

    st.clear();

    for (int i = n-1; i >= 0; i--)
    {
        st.insert(s[i]);
        suff[i] = st.size();
    }

    int ans = 0;
    fr (i,0,n)
    {
        ans = max(ans, pref[i] + suff[i + 1]);
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