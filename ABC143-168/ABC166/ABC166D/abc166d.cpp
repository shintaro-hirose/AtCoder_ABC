/*
2020-05-03
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
    ull X;
    cin >> X;

    for(int i = 0; i < 178; i++){
        for(int j = 0; j < 178; j++){
            ull a, b, d, e;
            a = pow(i, 5);
            b = pow(j, 5);
            d = a - b;
            e = a + b;
            if((a - b) == X){
                cout << i << " " << j << endl;
                return 0;
            } else if((a + b) == X){
                cout << i << " -" << j << endl;
                return 0;

            }
        }
    }
    
    return 0;
}
