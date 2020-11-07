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
    long long N, R_cnt = 0, G_cnt = 0, B_cnt = 0, remove_cnt = 0;
    string S;
    cin >> N >> S;

    for (char s : S) {
        if (s == 'R') {
            R_cnt++;
        } else if (s == 'G') {
            G_cnt++;
        } else {
            B_cnt++;
        }
    }

    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            int k = j + j - i;
            if (k > N - 1) {
                break;
            } else {
                set<char> RGB_set;
                RGB_set.insert(S.at(i));
                RGB_set.insert(S.at(j));
                RGB_set.insert(S.at(k));
                if (RGB_set.size() == 3) {
                    remove_cnt++;
                }
            }
        }
    }
    cout << R_cnt * G_cnt * B_cnt - remove_cnt << endl;

    return 0;
}

