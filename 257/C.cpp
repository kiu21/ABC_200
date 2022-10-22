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
  string S;cin>>S;
  vector<ll> W(N);rep(i,N) cin>>W[i];

  vector<ll> adult,kids;
  rep(i,N){
    if(S[i]=='1') adult.push_back(W[i]);
    else kids.push_back(W[i]);
  }
  sort(adult.begin(),adult.end());
  sort(kids.rbegin(),kids.rend());

  if(adult.size()==N || kids.size()==N){
    cout<<N<<endl;
    return 0;
  }
  int cnt=0;
  rep(i,kids.size()){
    if(kids[i]>kids[0]) break;
    cnt++;
  }
  int ans=N-cnt;

  if(adult.size()>ans) ans=adult.size();
  if(kids.size()>ans) ans=kids.size();

  cout<<ans<<endl;
  return 0;
}