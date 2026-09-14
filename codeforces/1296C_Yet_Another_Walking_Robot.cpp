#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string b;
        cin>> a >>b;
        vector<int> x(a+1);
        vector<int> y(a+1);

        x[0]=y[0]=0;

        for (int i = 0; i < a; i++)
        {
            x[i+1] = x[i] + ('R'==b[i]) - ('L'==b[i]);
            y[i+1] = y[i] + ('U'==b[i]) - ('D'==b[i]);  
        }


        map<pair<int,int>, int> last;
        last[{0,0}]=0;
        
        int tam=a+1, izq=0,dere=0, rep=0;
        for (int i = 1; i <= a; i++)
        {
            pair<int, int> pos = {x[i],y[i]};
            
            if(last.count(pos)){
                rep=i-last[pos];
                if(rep<tam){
                    tam=rep;
                    izq=last[pos]+1;
                    dere=i;
                }
            }
            last[pos]=i;
        }  
        if(tam==a+1) cout<<-1<<"\n";
        else cout<<izq<<" "<<dere<<"\n";     
        
    }
    


    return 0;
}