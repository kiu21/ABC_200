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
  int n;cin>>n;
  vector<int> ls,rs;
  vector<P> kukan;
  rep(i,n){
    int l,r;
    cin>>l>>r;
    kukan.push_back(P(l,r));
  }
  sort(kukan.begin(),kukan.end());

  vector<P> ans;
  int i=0;
  while(i<n){
    int a=kukan[i].second;
    int r_max=kukan[i].second;
    int j=i+1;
    int b=kukan[j].first;
    int l_min=kukan[i].first;
    while(b<=a){
      chmax(r_max,kukan[j].second);
      j++;
      b=kukan[j].first;
    }
    ans.push_back(P(l_min,r_max));
    i=j;
  }

  rep(i,ans.size()) cout<<ans[i].first<<" "<<ans[i].second<<endl;

  return 0;
}