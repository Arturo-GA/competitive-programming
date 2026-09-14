#include <bits/stdc++.h>
using namespace std;

string casos;
char anterior;
int cuenta;
int n=0;
int main(){
    cin >> n;
    cin >> casos;
    anterior =casos[0];
    for (int i = 1; i < casos.length(); i++)
    {
        if (anterior==casos[i]){
            cuenta++;
        }
        //cout << casos[i];
        //cout << anterior;
        anterior=casos[i];
    }
    cout << cuenta;
    return 0;
}