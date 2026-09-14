#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c[51];
    int contar=0;
    for(int i=0; i<a;i++){
        cin >> c[i];
    }
    for(int i=0; i<a;i++){ 
        if((c[i]>=c[b-1] ) && (c[i] > 0)){
            contar ++;
        }
    }
    cout << contar << "\n";
    return 0;
}