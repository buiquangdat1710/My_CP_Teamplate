#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define good_things_take_time
#ifdef good_things_take_time
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt") // some bits
#endif
#define bit(x,i) ((x >> i) & 1) 
#define offbit(x,i) x &= (~(1 << i)) 
#define onbit(x,i) x |= 1 << (i) 
#define revbit(x,i) x^= (1 << i) 
#define bit1(x) __builtin_popcount(x)
#define bit1ll(x) __builtin_popcountll(x)
#define tail0(x) __builtin_ctz(x)
#define lead0(x) __builtin_clz(x)
#define all(x) x.begin() , x.end()
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define MOD 1000000007
// #define MOD (119 << 23) + 1
#define el "\n"
#define eb emplace_back
#define pb push_back
#define make_unique(x) sort(all(x));x.erase(unique(all(x)), x.end());
#define PI 4*atan(1)
using ll = long long;
using ull = unsigned long long;
const int dx4[4] = {-1, 0, 0, 1};
const int dy4[4] = {0, -1, 1, 0};
const int dx8[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dx[8] = {-2,-2,-1,-1,1,1,2,2};
const int dy[8] = {-1,1,-2,2,-2,2,-1,1}; 
inline void solve(){

}
const bool typetest = 0; // Test here
signed main(){
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
	freopen("TASK1.out","w",stdout);
    #endif
    cin.tie(nullptr) -> sync_with_stdio(false);
    
    int t(1);
    if (typetest) {
        cin >> t;
        //cin.ignore();
    }
    while (t--) {
        solve();
    }
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
}