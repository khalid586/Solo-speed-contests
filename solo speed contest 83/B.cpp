#include <bits/stdc++.h>
using namespace std;

 #define int long long int


#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl "\n"

void IO(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt",  "r", stdin );
     //     freopen("out.txt", "w", stdout);
    //      freopen("Error.txt", "w", stderr);
     #endif // ONLINE_JUDGE
}
const int N = 1e6 + 1;
int g[5];
vector<bool> vis(5,0);

void solve(int t){
     int cs = 1;
     int n;
     while(cin >> n){
          int mx = INT_MIN , mn = INT_MAX;   
          rep(i,0,n){
               int a;
               cin >> a;

               mx = max(mx,a);
               mn = min(mn,a);
          }
     
          int ans = mx - mn;
          cout << "Case " << cs << ": ";
          cout << mn << ' ' << mx << ' ' << ans << '\n';
          ++cs;
     }
}

int32_t main()
{
  //   IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}




