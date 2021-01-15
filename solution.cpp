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

        int ans=0;
        for(int i=0; i< coordinate.size(); i++){
        	bool left  = false;
        	bool right = false;
        	bool upper = false;
        	bool lower = false;
        	int target_x = coordinate[i].F;
        	int target_y = coordinate[i].S;
        	
        	for(int j=0; j<coordinate.size(); j++){
        		if(j==i)
        		continue;
        		if(coordinate[i].F == coordinate[j].F and coordinate[i].S > coordinate[j].S)
        			lower = true;
        		else if(coordinate[i].F == coordinate[j].F and coordinate[i].S < coordinate[j].S)
        			upper = true;
        		else if(coordinate[i].F < coordinate[j].F and coordinate[i].S == coordinate[j].S)
        			right = true;
        		else if(coordinate[i].F > coordinate[j].F and coordinate[i].S == coordinate[j].S)
        			left = true;
        	}
        	if(lower and upper and right and left)
        		ans++;
        }
        cout<<ans<<endl;
        
        return 0; 
    } 