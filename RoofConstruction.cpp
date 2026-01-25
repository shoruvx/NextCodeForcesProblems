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

    vi v;

    int temp = n - 1;
    int count = 0;

    while (temp > 0)
    {
        count++;
        temp /= 2;    
    }

    for(int i = pow(2,count-1)-1; i >= 0; i--)
    {
        v.push_back(i);
    }

    for(int i = pow(2,count-1); i < n; i++)
    {
        v.push_back(i);
    }

    for (auto x: v)
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