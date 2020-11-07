/*
2020-05-05
atcoder ABC
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
    int N;
    cin >> N;
    N %= 10;
    switch(N){
        case 2:
        case 4:
        case 5:
        case 7:
            cout << "hon" << endl;
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            cout << "pon" << endl;
            break;
        case 3:
            cout << "bon" << endl;
            break;
        default: 
            break;
    }
    
    return 0;
}
