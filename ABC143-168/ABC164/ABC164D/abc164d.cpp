/*
2020-04-26
atcoder ABC
D - Multiple of 2019
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

map<int, int> m;
string S;

int dp(int, int);

int main() {
    cin >> S;
    
    int a = dp(0, S.size());
    return 0;
}

int dp(int a, int n){
    int ans = 0;
    if(a == n) {
        return 0;
    }
    ans = (dp(a + 1, n) + (int)(S.at(a) + '0' * (n - a - 1)));
    cout << a  << ":" << ans << endl;
    m[ans]++;
    return ans;
}
