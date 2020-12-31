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
        lli n;
        cin>>n;
     
        unordered_map<lli,lli> vasya;
        unordered_map<lli,lli> petya;
        int loop = n;
        int index=1;
     
        while(loop--){
            lli temp;
            cin>>temp;
            vasya[temp] = index;
            petya[temp] = n - index +1;
            index++;
        }
     
        lli queries;
        cin>>queries;
     
        lli ans_vasya=0;
        lli ans_petya=0;
        
        while(queries --){
            lli q;
            cin>>q;
            ans_vasya += vasya[q];
            ans_petya += petya[q];  
        }
        cout<<ans_vasya<<" "<<ans_petya<<endl;
        return 0;
    }