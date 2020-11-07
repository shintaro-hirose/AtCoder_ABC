/*
2020-04-20
atcoder ABC
D - Lunlun Number
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(31, vector<int>(4)); //二次元配列
    long long K, ans;
    cin >> K;
    //処理
    queue<long long> q;
    rep(i, 9) {
        q.push(i + 1);
    }
    rep(i, K - 1) {
        long long q_front = q.front();
        q.pop();
        if (q_front % 10 != 0) {
            q.push(q_front * 10 + q_front % 10 - 1);
        }
        q.push(q_front * 10 + q_front % 10);
        if (q_front % 10 != 9) {
            q.push(q_front * 10 + q_front % 10 + 1);
        }
    }
    ans = q.front();

    //出力処理
    cout << ans << endl;
    return 0;
}
