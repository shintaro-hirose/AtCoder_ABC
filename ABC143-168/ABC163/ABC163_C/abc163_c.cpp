#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int N;
    cin >> N;
    vector<int> members(N, 0);
    //処理
    rep(i, N-1) {
        int A;
        cin >> A;
        members.at(A - 1) += 1;
    }
    rep(i, N) {
        cout << members.at(i) << endl;
    }
    //出力処理
    return 0;
}
