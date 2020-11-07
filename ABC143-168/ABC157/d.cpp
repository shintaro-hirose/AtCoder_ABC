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
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> friends(N, vector<int>(0));
    vector<vector<int>> blocks(N, vector<int>(0));
    vector<int> belongTo(N, -1);
    vector<int> groups;

    rep(i, M){
        int a, b;
        cin >> a >> b;
        friends[a - 1].push_back(b - 1);
        friends[b - 1].push_back(a - 1);
    }
    rep(i, K){
        int a, b;
        cin >> a >> b;
        blocks[a - 1].push_back(b - 1);
        blocks[b - 1].push_back(a - 1); 
    }

    int groupNo = -1;
    int groupSize = 1;
    rep(i, N){
        if(belongTo[i] == -1){
            groupNo++;
            groupSize = 1;
            stack<int> s;
            s.push(i);
            belongTo[i] = groupNo;
            while(s.size() > 0){
                int cuser;
                cuser = s.top();
                s.pop();
                for(int x: friends[cuser]){
                    if(belongTo[x] == -1){
                        s.push(x);
                        belongTo[x] = groupNo;
                        groupSize++;
                    }
                }
            }
            groups.push_back(groupSize);
        }
    }
    rep(i, N){
        int cantBefriends = 0;
        for(int x: friends[i]){
            if(belongTo[i] == belongTo[x]) cantBefriends++;
        }
        for(int x: blocks[i]){
            if(belongTo[i] == belongTo[x]) cantBefriends++;
        }

        cout << groups[belongTo[i]] - 1 - cantBefriends;
        if(i != N - 1){
            cout << " ";
        }
    }
    
    return 0;
}
