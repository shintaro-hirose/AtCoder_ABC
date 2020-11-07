/*
2020-04-26
atcoder ABC
C - gacha
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

int main() {
    int N;
    cin >> N;
    set<string> S;
    for(int i = 0; i < N; i++) {
        string input_s;
        cin >> input_s;
        S.insert(input_s);
    }
    cout << S.size() << endl;
    return 0;
}
