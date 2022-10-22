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
  table a_num(N+1);
  
  rep(i,N){
    int a;cin>>a;
    a_num[a].push_back(i);
  }
  int Q;cin>>Q;
  
  rep(i,Q){
    int l,r,x;cin>>l>>r>>x;
    int ans=lower_bound(a_num[x].begin(),a_num[x].end(),r)-lower_bound(a_num[x].begin(),a_num[x].end(),l-1);
    cout<<ans<<endl;
  }

  return 0;
}