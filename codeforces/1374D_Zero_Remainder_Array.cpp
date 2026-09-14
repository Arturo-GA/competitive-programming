#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b;
        map <long long, int> con;
        for(int i=0;i<a;i++){
            cin>>c;
            if(c%b!=0){
                con[(b-c%b)]++;
            }
        }

        if(con.empty()){
            cout<<0<<"\n";
            continue;
        }

        int cycle = 0, last_t=0;
        for(auto& [r,t] : con)
            cycle = max(cycle,t);
        
        for(auto& [r,t] : con)
            if(t==cycle)
                last_t = r;

        cout<<  (long long)(cycle-1)*b + last_t + 1<<"\n";


    }

    return 0;
}







/* 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;

        map<long long, int> cnt;
        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            long long need = (k - a % k) % k;
            if(need != 0)
                cnt[need]++;
        }

        if(cnt.empty()){
            cout << 0 << "\n";
            continue;
        }

        //Cuantos ciclos se necesita para completar la cuenta.
        int cycles = 0;
        for(auto& [r, c] : cnt)
            cycles = max(cycles, c);

        long long last_r = 0;
        for(auto& [r, c] : cnt)
            if(c == cycles)
                last_r = r;

        cout << (long long)(cycles - 1) * k + last_r + 1 << "\n";
    }
    return 0;
}

*/