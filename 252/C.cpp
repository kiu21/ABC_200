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
  int N;cin>>N;
  vector<string> S(N);
  rep(i,N) cin>>S[i];
  vector<int> cnt(10);
  int ans=1000;

  rep(i,10){
    int a=S[0][i];
    cnt[a]++;
    int preans=0;
    int ma=0;

    rep(j,N){
      rep(k,10){
        if(S[j][k]==a){
          cnt[k]++;
          chmax(ma,k-1);
        }
      }
    }
    preans+=ma;
    rep(j,10) if(cnt[j]>1) preans+=10*(cnt[j]-1);

    chmin(ans,preans);
  }

  cout<<ans<<endl;
  return 0;
}