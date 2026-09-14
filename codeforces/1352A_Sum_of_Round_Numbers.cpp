# include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>b;
    for (int j = 0; j< b; j++)
    {
        /* code */
    
        int c,cuenta=0, cuenta2=0;
        cin >> a;

        c=a;

        for (int i=5; i >= 0;i--)
        {

            if(c<pow(10,i)){

            }
            else if(c>=pow(10,i)){
                cuenta =c/(pow(10,i));
                c -= cuenta*pow(10,i);
                cuenta2++;
                
            }
        }
        cout<<cuenta2<<"\n";

        cuenta=0;

        for (int i=5; i >= 0;i--)
        {

            if(a<pow(10,i)){

            }
            else if(a>=pow(10,i)){
                cuenta =a/(pow(10,i));
                a -= cuenta*pow(10,i);
                cout<<(cuenta)*pow(10,i)<<" ";
             
                //cout<<(cuenta)*pow(10,i)<<" "<< cuenta<<" a "<<a<<"\n";  
            }
        }


        cout<<" \n";
        


        
        /*string z;
        cin>>z;
        for (int i = 0; i < a; i++) 
        { 
            if(z[i]=='(') dere++;
            else if(z[i]==')'&&dere<=izq) izq++,dere++, cuenta++; //cout<<i<<" z[i] "<<z[i]<<" cout "<<cuenta<<"\n";
            else izq++;
        }
        */




        //cout<<cuenta<<"\n";
        
    }


    return 0;
}