#include <bits/stdc++.h>
using namespace std;


int b,t;
int main(){

    cin >> b;
    while(b--){
        int x;
        cin >> x;    
        if(x>45){
            cout << -1<<"\n";
            continue;
        }
        

        else{       
            string a;
            a = "";
            for (int i = 9; i > 0; i--)
            {
                if(x >= i){
                    a += char('0'+i);
                    x -= i;
                }
            }
      

            reverse(a.begin(),a.end());

            cout << a;
            
            if(b>1){

            }
            cout<<"\n";
        }

    }


    

    return 0;
}