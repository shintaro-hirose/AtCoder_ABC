/*
2020-04-20
atcoder ABC
D - Line++
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int abs (int x, int y) {
    if (x > y) {
        return x - y;
    } else {
        return y - x;
    }
}
int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<long long> len_memo(N-1, 0);
    //処理
    for (int i = 1; i < N; i++) {
        for (int j = i + 1; j < N + 1; j++) {
            int min_len = min(min(abs(j - i), abs(X - i) + 1 + abs(Y - j)), abs(X - j) + 1 + abs(Y - i));
            len_memo.at(min_len - 1)++;
        }
    }
    rep(i, N-1) {
        cout << len_memo.at(i) << endl;
    }
    //出力処理
    return 0;
}
