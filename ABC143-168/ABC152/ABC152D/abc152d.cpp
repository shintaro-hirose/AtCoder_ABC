/*
2020-04-25
atcoder ABC
D: Handstand 2
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
    int N, ans;
    cin >> N;
    vector<vector<int>> data(10, vector<int>(10));
    for(int i = 1; i < N + 1; i++) {
        int k = i;
        int lastDigit = i % 10;
        while(k / 10 > 0) {
            k /= 10;
        }
        int firstDigit = k;
        data[firstDigit][lastDigit] += 1;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++) {
            ans += (data[i][j] * data[j][i]);
        }
    }
    cout << ans << endl;
    return 0;
}
