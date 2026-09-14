#include <bits/stdc++.h>
using namespace std;


int sumaj=0;
int main(){
    int a;
    //double minimo=0.0;

    cin >> a;
    
    for(int ii=0;ii<a;ii++){
        sumaj=0;
        //vector<int> x(a),y(a);
        //cin>> x[ii]>> y[ii];
        int b, c, sumai=0;
        cin >> b >> c;
        string num;
        cin >> num;

        for (int i = 0; i < b; i++)
        {
            if(num[i]=='0'){
                sumai=0;
                int j=0;
                for (j = 0; j <= c && j+i<b; j++)
                {
                    if(num[i+j]=='1'){
                        sumai=1;
                        break;
                    }
                    //cout << sumaj<<" sumaj "<< i<<"  i  - j  "<<j<<"\n";
                    
                }
                //cout << sumaj<<" sumaj "<< i<<"  i  - j"<<j<<"\n";
                if(sumai==0){
                    sumaj++;
                    i = i+c;
                    
                }
                else if(sumai==1 && i+j<b){
                    i=i+j-1;
                }
                else if(sumai==1 && i+j>=b){
                    i=b;
                }
                

            }
            else if(num[i]=='1'){
                i += c;
            }
        }
        


        cout << sumaj<<"\n";
        //cout << x[ii]<<"\n";
    }


    return 0;
}