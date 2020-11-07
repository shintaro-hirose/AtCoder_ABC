/*
2020-04-20
atcoder ABC
C - Sum of gcd of Tuples (Easy)
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //変数定義, 入力処理
    // vector<vector<int>> data(3, vector<int>(4)); //二次元配列
    int N;
    long long all_sum = 0;
    cin >> N;
    map<int , long long> ball_num_counts;
    vector<int> a_array(N);
    
    

    rep(i, N) {
        int A;
        cin >> A;
        a_array.at(i) = A;
        ball_num_counts[A] = ball_num_counts[A] + 1;
    }

    for (pair<int, long long> p : ball_num_counts) {
        all_sum += (p.second - 1 ) * p.second / 2;
    }

    rep(i, N) {
        long long sum_ans = 0;
        sum_ans = all_sum - ball_num_counts.at(a_array.at(i)) + 1;
        cout << sum_ans << endl;
    }
    return 0;
}
