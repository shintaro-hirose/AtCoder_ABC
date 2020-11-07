/*
2020-04-20
atcoder ABC
C - Replacing Integer
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    unsigned long long N, K;
    cin >> N >> K;
    //処理
    while (N > K / 2) {
        if(N > K) {
            N %= K;
        } else {
            N = K - N;
        }
    }
    //出力処理
    cout <<  N << endl;
    return 0;
}
