    #include <bits/stdc++.h>
    using namespace std;
    #define PKMKB ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define lli long long int
    #define ull unsigned long long
    #define all(a) begin(a),end(a)
    #define pb push_back
    #define mp make_pair
    #define S second
    #define F first
    #define MOD 1000000007
     
    int main() 
    { 
    	PKMKB;
      
        int n;
        cin>>n;
     
        vector<pair<int ,int> > coordinate;
        for(int i=0; i<n; i++){
        	int x,y;
        	cin>>x >>y;
        	coordinate.pb({x,y});
        }

        
        return 0; 
    } 