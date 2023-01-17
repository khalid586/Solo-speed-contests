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
     rep(i,0,3){
          int a,b;
          cin >> a >> b;
          g[a]++; g[b]++;
     }
     bool ok = 1;
     rep(i,1,5) if(g[i] == 0 or g[i] == 3) ok = 0;

     cout << (ok ? "YES\n": "NO\n");
}

int32_t main()
{
     IO();
     std::ios::sync_with_stdio(false);cin.tie(NULL);

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

