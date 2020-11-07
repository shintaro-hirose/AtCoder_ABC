/*
2020-05-05
atcoder ABC
*/

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

const ll mod = 1000000007;

int main() {
    int N;
    cin >> N;
    int matched_cnt = 0;
    int p_rank;
    int q_rank;
    int cnt = 0;
    vector<int> p_array(N);
    vector<int> q_array(N);
    rep(i, N){
        cin >> p_array[i];
    }
    rep(i, N){
        cin >> q_array[i];
    }
    vector<int> numbers(N);
    rep(i, N){
        numbers[i] = i + 1;
    }
    do{
        if(numbers == p_array){
            p_rank = cnt;
            matched_cnt++;
        }
        if(numbers == q_array){
            q_rank = cnt;
            matched_cnt++;
        }
        if(matched_cnt == 2) break;
        cnt++;
    }while(next_permutation(numbers.begin(), numbers.end()));

    cout << abs(p_rank - q_rank) << endl;
    
}
