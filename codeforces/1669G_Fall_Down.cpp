#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        string x[a];                    // fix 1: array de strings
        for(int i = 0; i < a; i++)
            cin >> x[i];

        

        for (int k = 0; k <b; k++)
        {
           int base=a-1;
           for (int i = a-1; i>= 0; i--)
           {
                if(x[i][k]=='o'){
                    base=i-1;
                }
                else if(x[i][k]=='*'){
                    
                    x[i][k]='.';
                    x[base][k]='*';
                    base--;

                }
           }
           
        }
        for(int i = 0; i < a; i++)
            cout << x[i] << "\n";  
        

    }
    


    return 0;
}