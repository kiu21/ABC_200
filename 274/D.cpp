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
    int N,x,y; cin>>N>>x>>y;
    vector<int> A(N); rep(i,N) cin>>A[i];

    x-=A[0];
    vector<int> sum(N-1,0);
    repp(i,1,N-1){
        sum[i]=sum[i-1]+A[i];
    }

    int l=0,r=1;
    while(r<N-1){
        r++;
        if(sum[r]-sum[l]!=x){
            l++;
        }else{
            if(sum[r]-sum[l]==y)cout<<"Yes"<<endl;
        }
    }
    cout<<"No"<<endl;

    return 0;
}