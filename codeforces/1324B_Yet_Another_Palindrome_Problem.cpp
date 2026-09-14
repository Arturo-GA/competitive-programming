#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    long long n,c,suma;
    for (int i = 0; i < a; i++)
    {
        
        cin>>n;
        vector<int> a(n);
        vector <pair<int,int>> v;
        for(int i=0; i<n;i++){
            cin>>a[i];
        }



        // Para cada valor guardamos primera y última posición
        map<int,int> first_pos, last_pos;
        for(int i = 0; i < n; i++){
            if(first_pos.find(a[i]) == first_pos.end())
                first_pos[a[i]] = i;
            last_pos[a[i]] = i;
        }
        
        bool found = false;
        for(auto& [val, fp] : first_pos){
            if(last_pos[val] - fp >= 2){
                found = true;
                break;
            }
        }
        
        cout << (found ? "YES" : "NO") << "\n";
        



        
  
    }
    
   
    return 0;
}



















