/*
2020-04-25
atcoder ABC
D - Caracal vs Monster
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

ull solve(ull);

int main() {
    ull H;
    cin >> H;
    cout << solve(H) << endl;
    
    return 0;
}

ull solve(ull H){
    if(H <= 1){
        return 1;
    }
    return solve(H / 2) * 2 + 1;
}