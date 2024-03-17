// Author : Muthuvel_A
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define pb push_back
#define ll long long
#define fl(x,n) for(int i=x;i<n;i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pii 3.141592653589793238462643383279502884197
#define ff first
#define ss second
//const int N=2e5+1;
// -------------------------------------Debug Starts----------------------------------
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
// -----------------------------------------Debug Ends---------------------------------

void localInput(){
    #ifndef ONLINE_JUDGE
        #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
    #else
    #define debug(x...)
    #endif
}
 int fun (int x){
         string s = to_string(x);
         char maxi = *max_element(s.begin(), s.end());
        cout<<(maxi - '0') * s.size()<<endl;
         return (maxi - '0') * s.length();
        
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size(),s=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                s+=nums[i];
            }else{
                s+=fun(nums[i]);
            }
        }
        return s;
    }
void solve() {
   int ans=sumOfEncryptedInt({10,21,31});
   cout<<ans;
}
 
 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    // solve();
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++){
      solve();
    //}
    return 0;
}