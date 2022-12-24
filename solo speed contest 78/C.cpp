#include <bits/stdc++.h>
using namespace std;

//#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)

void solve(int t){
     int n ;
     cin >> n;

     rep(i,0,n){
          cout << (499 - i) << ' ';
     }

     cout << "\n";
}
int32_t main()
{
     freopen("in.txt","r", stdin);

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

