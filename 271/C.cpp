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
    ll N;cin>>N;
    priority_queue<ll,vector<ll>,greater<ll>> a;
    rep(i,N){
        ll aa;cin>>aa;
         a.push(aa);
    }

    ll ans=1;
    ll pos=N;
    while(pos>1){
        if(a.top()==ans){
            ans++;
            pos--;
        }else{
            pos-=2;
            ans++;
        }
        a.pop();

    }
    cout<<ans-1<<endl;
    return 0;
}