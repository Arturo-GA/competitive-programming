#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int> x(a);
        vector<int> y(a);
        int cuentR2=0, cuentL1=0;
        for (int j = 0; j < a; j++) cin>>x[j];
        for (int j = 0; j < a; j++) 
        { 
            cin>>y[j];
            if(y[j]==2) cuentR2++;
            else cuentL1++;
        }

        vector<int> R2(cuentR2+1);
        vector<int> L1(cuentL1+1);
        cuentR2=0, cuentL1=0;

        R2[0]=0;
        L1[0]=0;

        for (int i=0;i<a;i++){
            if(y[i]==2) cuentR2++, R2[cuentR2]=x[i];
            else cuentL1++, L1[cuentL1]=x[i];
        }



        sort(R2.begin(),R2.end());
        sort(L1.begin(),L1.end());
          
        /*cout<<R2[4]<<" R2 +3"<<"\n";
        cout<<R2[3]<<" R2 +3"<<"\n";
        cout<<R2[2]<<" R2 +2"<<"\n";
        cout<<R2[1]<<" R2 +1"<<"\n";
        cout<<R2[0]<<" R2 "<<"\n";
 
  
        cout<<L1[cuentL1+2]<<" L1 +2 "<<"\n";
        cout<<L1[cuentL1+1]<<" L1 "<<"\n";
        cout<<L1[cuentL1]<<" L1-1 "<<"\n";
        cout<<L1[2]<<" L 2 "<<"\n";
        cout<<L1[3]<<" L 3 "<<"\n";
        cout<<L1[4]<<" L 4 "<<"\n";
        */

        int suma = 0;
        while(R2[cuentR2] + L1[cuentL1]>0&&(cuentR2 + cuentL1)>0&&b>0){
            if(L1[cuentL1]<b&&cuentL1>0 &&cuentR2>0&&(R2[cuentR2]>(L1[cuentL1]+L1[cuentL1-1]))){
                b-=R2[cuentR2];
                //cout<<b<<" 2 "<<R2[cuentR2]<<"cuenta"<<cuentR2<<"\n";
                cuentR2--;
                suma += 2;
                
            }
            else if(L1[cuentL1]<b&&cuentR2>0&&(0==cuentL1)){
                b-=R2[cuentR2];
                //cout<<b<<" 2 "<<R2[cuentR2]<<"cuenta"<<cuentR2<<"\n";
                cuentR2--;
                suma += 2;
                
            }
            else{
                b-=L1[cuentL1];
                //cout<<b<<" Q "<<L1[cuentL1]<<"\n";
                cuentL1--;   
                suma += 1;   
                         
            }
        }

        if(b>0) cout<<-1<<"\n";
        else cout<<suma<<"\n";

    }
    
    


    return 0;
}