    #include <bits/stdc++.h>
    using namespace std;
    #define PKMKB ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define lli long long int
    #define ull unsigned long long

    #define all(a) begin(a),end(a)
    #define pb push_back
    #define mp make_pair
    #define u_map unordered_map
    #define map map
    #define S second
    #define F first
    #define MOD 1000000007
     
     
    int main() {
       PKMKB;
       int tc;
       cin >> tc;
       while(tc--)
       {
         
          lli n;
          cin>>n;
          n=2*n;
          lli freq[10000];
         memset(freq,0,sizeof freq);
          for(lli i=0;i<n;i++){
              lli x;
              cin>>x;
              if(freq[x]==0){
                  cout<<x<<" ";
              }
              freq[x]++;
          }
          cout<<endl;
       }
        return 0;
    }
