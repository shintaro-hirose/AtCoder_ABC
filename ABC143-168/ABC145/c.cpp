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
    cin >> N;
    vector<i_i> towns(N, {0, 0});
    vector<int> array;
    double total, ans;

    rep(i, N){
        int x,y;
        cin >> x >> y;
        towns[i] = {x, y};
        array.push_back(i + 1);
    }

    total = 0;
    cnt = 0;
    do{
        for(int i = 0; i < N - 1; i++){
            total += sqrt(pow(towns[array[i] - 1].first - towns[array[i + 1] - 1].first , 2.0) + pow(towns[array[i] - 1].second - towns[array[i + 1] - 1].second, 2.0));
        }
        cnt++;
    }while(next_permutation(array.begin(), array.end()));


    ans = total / cnt;
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
