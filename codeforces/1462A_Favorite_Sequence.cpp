#include <bits/stdc++.h>
using namespace std;

int cant;
int a[300];
int b[300][300];
int ii[300];
int jj[300];
int main(){
    cin >> cant;
    for(int i=0; i<cant;i++){
        cin >>a[i];
        ii[i]=i;
        for (int j = 0; j < a[i]; j++)
        {
            cin>>b[j][i];
            jj[j]=j;
        }
        
    }

    
    for(int i=0; i<cant;i++){
        int rest=0;
        int suma=0;
        for (int j = 0; j < a[i]; j++)
        {
            if(j%2!=0){
                cout << b[a[i]-1-rest][i];
                rest++;
            }
            else{
                cout <<b[suma][i];
                suma++;
            }

            if(i !=a[i] ){
                cout << " ";
            }
            
        }
        cout << "\n";
        
    }


    return 0;
}