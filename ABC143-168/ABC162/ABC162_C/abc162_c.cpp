/*
2020-04-20
atcoder ABC
C - Sum of gcd of Tuples (Easy)
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int gcd(int x, int y) {
    int a = max(x, y);
    int b = min(x, y);
    if (a % b == 0) {
        return b;
    } else {
        return gcd(b, a - b);
    }
}

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int K;
    long long ans = 0;
    cin >> K;
    //処理
    rep(i, K) {
        rep(j, K) {
            rep(k, K) {
                ans += gcd(gcd(i + 1, j + 1), k + 1);
            }
        }
    }
    //出力処理
    cout <<  ans << endl;
    return 0;
}
