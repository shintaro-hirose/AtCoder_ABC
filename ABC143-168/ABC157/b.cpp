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
    int N, cnt;
    bool hasBingo = false;
    vector<vector<int>> cardNum(3, vector<int>(3));
    vector<vector<int>> cardHole(3, vector<int>(3));
    rep(i, 3){
        rep(j, 3){
            cin >> cardNum[i][j];
        }
    }
    cin >> N;
    rep(i, N){
        int num;
        cin >> num;
        rep(j,3){
            rep(k, 3){
                if(cardNum[j][k] == num){
                    cardHole[j][k] = 1;
                }
            }
        }
    }
    rep(i, 3){
        cnt = 0;
        rep(j, 3){
            cnt += cardHole[i][j];
        }
        if(cnt == 3){
            hasBingo = true;
            break;
        }
    }
    rep(i, 3){
        cnt = 0;
        rep(j, 3){
            cnt += cardHole[j][i];
        }
        if(cnt == 3){
            hasBingo = true;
            break;
        }
    }
    cnt = 0;
    rep(i, 3){
        cnt += cardHole[i][i];
    }
    if(cnt == 3){
        hasBingo = true;
    }

    cnt = 0;
    rep(i, 3){
        cnt += cardHole[i][2 - i];
    }
    if(cnt == 3){
        hasBingo = true;
    }
    if(hasBingo){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
