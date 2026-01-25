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

void solve() {
  int N, K;
  cin >> N >> K;
  vi B(N + 1);
  vi C(N + 1);
  B[0] = 0;
  for (int i = 1; i <= N; i++) {
    int ai;
    cin >> ai;
    B[i] = B[i - 1] + ai;
  }
  for (int i = 1; i <= N; i++) {
    cin >> C[i];
  }
 

  vi pfx_min(N + 1);
  pfx_min[0] = B[0];
  for (int i = 1; i <= N; i++) {
    pfx_min[i] = min(B[i], pfx_min[i - 1]);
  }

  vi sfx_max(N + 1);
  sfx_max[N] = B[N];
  for (int i = N - 1; i >= 0; i--) {
    sfx_max[i] = max(B[i], sfx_max[i + 1]);
  }
 
  int ans = -1E16;
  for (int i = 1; i <= N; i++) {
    int this_ans = sfx_max[i] - pfx_min[i - 1];
    if (K % 2) {
      this_ans += C[i];
    }
    ans = max(ans, this_ans);
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