#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;



#define ll              long long 
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.rbegin(), v.rend())
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define lld             long double
#define ull             unsigned long long
#define all(s)          s.begin(),s.end()
#define endl            '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))
#define lcm3(a,b,c)     (lcm(a,b)*c)/(__gcd(c,lcm(a,b)))
//----------------------------------------------------debugger-------------------------------------------------------------// |
void _print(ll t) {cerr << t <<",";}
void _print(int t) {cerr << t<<",";}
void _print(string t) {cerr << t<<",";}
void _print(char t) {cerr << t<<",";}
void _print(lld t) {cerr << t<<",";}
void _print(double t) {cerr << t<<",";}
void _print(ull t) {cerr << t<<",";}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}
//----------------------------------------------------debugger-------------------------------------------------------------//|
template<class T>
using indexed_set = tree<T,null_type,less<T>,rb_tree_tag,
tree_order_statistics_node_update>;
// *s.find_by_order returns the value stored at that position
// s.order_of_key returns the position where the value is stored
//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

#define int long long int
const int N = 1e6+7;



int moveX[] = {1,0};
int moveY[] = {0,1};

char g[8][8];
int h,w;

bool Valid(int a, int b){
     return (a < 0 or b < 0 or a >= h or b >= w)? 0 : 1;
}
bool ok = 1;
void dfs(int x, int y){
     if(g[x][y] == '.') return;
     g[x][y] = '.';
     
     if(!ok) return;

     if(Valid(x+1 , y) and Valid(x,y+1)){
          if(g[x+1][y] == '#' and g[x][y+1] == '#')
              { ok = 0; return;}
     }
      
     rep(i,0,2){
          if(Valid(x+moveX[i] , y + moveY[i]))
               dfs(x+moveX[i] , y + moveY[i]);
     }
}

// solution starts here
void solve(int t){ 
     cin >> h >> w;
     rep(i,0,h)
          rep(j,0,w) cin >> g[i][j];

     dfs(0,0);

     rep(i,0,h)
          rep(j,0,w) if(g[i][j] == '#'){ ok = 0; break;}

     cout << (ok ? "Possible\n":"Impossible\n");
}    

int32_t main()
{
     FastIO() ;
     ll T = 1;
    // cin >> T;

     rep(i,1,T + 1){
          solve(i);
     }
     return 0;
}

