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
         
          unordered_map<int,int> m;
          lli x,y,z;
          cin>>x>>y>>z;
          m[x]++;
          m[y]++;
          m[z]++;
          lli maximum=max(x,max(y,z));
          if(m[maximum]<2)
          cout<<"NO"<<endl;
          else
          {
              int max2;
    		if(x==maximum){
    			if(y<maximum){
    				max2=y;
    			}
    			else max2=z;
    		}
    		else if(y==maximum){
    			if(x<maximum) max2=x;
    			else max2=z;
    		}
    		else if(z==maximum){
    			if(x<maximum) max2=x;
    			else max2=y;
    		}
              cout<<"YES"<<endl;
              cout<<maximum<<" "<<max2<<" "<<max2<<endl;
          }
       }
        return 0;
    }