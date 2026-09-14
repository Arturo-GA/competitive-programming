#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin>> a;
        vector<int> x(a);
        for (int j = 0; j < a; j++) cin>>x[j];

        //a = [4, 3, 3, 8, 4, 5, 2]
        int i=a-1;
        // Fase 1: no-decreasing (hacia la izquierda)
        while (i > 0 && x[i-1] >= x[i]) {
            i--;
        }

        // Fase 2: no-increasing
        while (i > 0 && x[i-1] <= x[i]) {
            i--;
        }

        cout << i << "\n";
    
        
    }
    


    return 0;
}