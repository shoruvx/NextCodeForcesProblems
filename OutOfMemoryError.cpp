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
    int n,m,h; cin >> n >> m >> h;

    in(v,n);

    vi temp = v;

    int lastRes = -1;
    int reset = 0;

    vector<pair<int,int>> vp;

    vi visited(n,0);

    fr(i,0,m)
    {
        int b, c;
        cin >> b >> c;

        vp.push_back(make_pair(b,c));

        // if(reset && !visited[b-1])
        // {
        //  temp[b-1] = v[b-1];
        //  visited[b-1] = 1;
        // }

        temp[b-1] += c;

        if (temp[b-1] > h)
        {
            temp[b-1] = v[b-1];
            lastRes = i;
            reset = 1;
        }

        
    }

    if (lastRes != -1)
    {
        fr(i,lastRes+1,m)
        {
            v[vp[i].first-1] += vp[i].second;
        }
    }
    else
    {
        fr(i,0,m)
        {
            v[vp[i].first-1] += vp[i].second;
        }
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;

}

int32_t main() 
{
    fastio;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}