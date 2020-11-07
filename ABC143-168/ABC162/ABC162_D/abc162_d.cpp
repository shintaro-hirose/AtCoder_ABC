/* 
ABC 162 D問題
RGB Triplets
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int N, cnt = 0;
    string S;
    cin >> N >> S;
    vector<int> R_place;
    vector<int> G_place;
    vector<int> B_place;
    //処理
    for(int i = 0; i < N; i++) {
        if (S.at(i) == 'R') {
            R_place.push_back(i);
        } else if (S.at(i) == 'G') {
            G_place.push_back(i);
        } else {
            B_place.push_back(i);
        }
    }
    rep(i, R_place.size()) {
        rep(j, G_place.size()) {
            rep(k, B_place.size()) {
                vector<int> temp = {R_place.at(i), G_place.at(j), B_place.at(k)};
                sort(temp.begin(), temp.end());
                if (temp.at(2) - temp.at(1) == temp.at(1) - temp.at(0)) {
                    // cout << temp.at(0) << "," << temp.at(1) << "," << temp.at(2) << endl;
                    continue;
                }
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    //出力処理
    // rep(i, R_place.size()) {
    //     cout << R_place.at(i) << ", ";
    // }
    // cout << endl;
    // rep(i, G_place.size()) {
    //     cout << G_place.at(i) << ", ";
    // }
    // cout << endl;
    // rep(i, B_place.size()) {
    //     cout << B_place.at(i) << ", ";
    // }
    // cout << endl;
    return 0;
}

