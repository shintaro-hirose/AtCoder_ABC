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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> roads(N, vector<int>(0));
    vector<int> suggestions(N);
    vector<int> hash(N);

    rep(i, M){
        int a, b;
        cin >> a >> b;
        roads[a - 1].push_back(b - 1);
        roads[b - 1].push_back(a - 1);
    }

    queue<int> q;
    q.push(0);
    while(q.size() > 0){
        int room;
        room = q.front();
        q.pop();
        for(int x: roads[room]){
            if(hash[x] == 0){
                q.push(x);
                suggestions[x] = room;
                hash[x] = 1;
            }
        }
    }
    cout << "Yes" << endl;
    rep(i, N - 1){
        cout << suggestions[i + 1] + 1 << endl;
    }
    
    return 0;
}
