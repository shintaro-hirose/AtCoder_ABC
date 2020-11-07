#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    // int N, K;
    int N, K;
    long long cnt = 0;
    int mod = 1e9 + 7;
    cin >> N >> K;
    //処理
    for (int i = K; i <= N + 1; i++) {
        cnt = cnt +((N - i + 1) * i + 1);
        cnt %= mod;


    }
    //出力処理
    cout << cnt << endl;
    return 0;
}
