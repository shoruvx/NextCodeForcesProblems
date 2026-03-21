#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <cstring>
#include <bitset>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>

using namespace std;

int n = 1000000000;
vector<bool> isPrime (n+1, true);
int findPrime(int x)
{
    return isPrime[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
           for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            } 
        }
        
    }

    int x; cin >> x;

    if (findPrime(x)) cout << "Prime!\n";
    else cout << "Not Prime!\n";

    

    return 0;
}