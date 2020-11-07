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
    ll ans;
    cin >> N;
    vector<int> stickLength(N);
    rep(i, N){
        cin >> stickLength[i];
    }
    sort(stickLength.begin(), stickLength.end());

    ans = 0;
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1 ; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                int a, b, c;
                a = stickLength[i];
                b = stickLength[j];
                c = stickLength[k];
                if(c < a + b){
                    ans++;
                } else {
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
