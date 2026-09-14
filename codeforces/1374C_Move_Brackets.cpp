# include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>b;
    for (int j = 0; j< b; j++)
    {
        /* code */
    
        int dere=0, izq=0,cuenta=0;
        cin >> a;
        string z;
        cin>>z;
        for (int i = 0; i < a; i++) 
        { 
            if(z[i]=='(') dere++;
            else if(z[i]==')'&&dere<=izq) izq++,dere++, cuenta++; //cout<<i<<" z[i] "<<z[i]<<" cout "<<cuenta<<"\n";
            else izq++;
        }




        cout<<cuenta<<"\n";
        
    }


    return 0;
}