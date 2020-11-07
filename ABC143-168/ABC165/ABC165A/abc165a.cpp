/*
2020-05-02
atcoder ABC
A - We Love Golf
*/

#include <bits/stdc++.h>
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
    int K, A, B;
    cin >> K >> A >> B;
    for(int i = A; i < B + 1; i++){
        if(i % K == 0){
            cout << "OK" << endl; 
            return 0;
        }
    }
    cout << "NG" << endl;
    return 0;
}
