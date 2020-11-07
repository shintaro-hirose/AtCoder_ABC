#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int N, M, sum = 0;
    cin >> N >> M;
    //処理
    rep(i, M) {
        int a;
        cin >> a;
        sum += a;
        if (sum > N) {
            cout << "-1" << endl;
            return 0;
        }
    }
    //出力処理
    cout << N - sum << endl;
    return 0;
}
