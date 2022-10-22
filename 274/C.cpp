#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
using table = vector<vector<int>>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}



int main()
{
    int N;
    cin>>N;
    table As(2*N+2);
    vector<int> dist(2*N+2);
    repp(i,1,N){
        int a; cin>>a;

        dist[2*i]=dist[a]+1;
        dist[2*i+1]=dist[a]+1;

    }


    repp(i,1,2*N+1) cout<<dist[i]<<endl;
    return 0;
}