#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    
    vector<pair<int,int>> eventos;  // solo cambias el almacenamiento

    for(int i = 0; i < a; i++){
        int xi, yi;
        cin >> xi >> yi;
        eventos.push_back({xi, +1});  // llega
        eventos.push_back({yi, -1}); // sale
    }

    sort(eventos.begin(), eventos.end());

    int cuenta = 0, maxi = 0;
    for(int i = 0; i < eventos.size(); i++){
        cuenta += eventos[i].second;        // acumulas suma
        maxi = max(maxi, cuenta);           // guardas el maximo
    }

    cout << maxi;
    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin>>a>>b;

    vector<int> x(a);
    for (int i = 0; i < a; i++) cin>>x[i];
    sort(x.begin(),x.end());

    int derecha=a-1,cuenta=0;
    for (int i = 0; i < a &&derecha>=i; i++)
    {
        if(derecha == i){
            cuenta++;
        }
        else if(x[i]+x[derecha] <= b){
            cuenta++;
            derecha--;
            
        }
        else if(x[i]+x[derecha] > b){
            cuenta++;
            derecha--;
            i--;
        }
    }
    cout<<cuenta;

    return 0;
}

*/