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
    int n, x; cin >> n >> x;
    in(v,n);
    int count = 0;
    int curr;

    if (n <= 1)
    {
        cout << 0 << endl;
        return;
    }

    // if (abs(v[0]-v[1]) > x)
    // {
        
        if ((v[1]-v[0]) > 0)
        {
           curr = v[0] + x; 
        }
        else
        {
            curr = v[0] - x;
        }
    // }
    // else
    // {
    //     curr = v[1];
    // }

    fr(i,1,n-1)
    {
        if (abs(v[i]-curr) > x)
        {
            count++;
            // cout << v[i] << " ";
            // if (abs(v[i]-v[i+1]) > x)
            // {
                if ((v[i+1]-v[i]) > 0)
                {
                   curr = v[i] + x; 
                }
                else
                {
                    curr = v[i] - x;
                }
            // }
            // else
            // {
            //     curr = v[i+1];
            // }
        }
    	
    }

    if (abs(v[n-1]-curr) > x)
        {
            count++;
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