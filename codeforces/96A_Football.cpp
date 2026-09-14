#include <bits/stdc++.h>
using namespace std;


int main(){
    string disp;

    int cuenta =0;
    cin >> disp;
    int anterior = disp[0];
    for(int i=1; i < disp.length() ;i++){
        if(anterior == int(disp[i])){
            cuenta++;
        }
        else if (anterior !=int(disp[i])){
            cuenta =0;
        }
        anterior = int(disp[i]);
        if(cuenta == 6){
            cout << "YES";
            return 0;
        }
        
    }
    cout << "NO";
    return 0;

}