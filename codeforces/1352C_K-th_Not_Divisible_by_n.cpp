#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    long long a[1000][2], b[1000][2];
    long long x;
    long long j=0;
    int count;

    cin >> count;
    for(int i=0;i<count;i++){
        cin >> a[i][0] >>a[i][1];
    }
    //cout 

    for(int i=0;i<count;i++){
        x=0;
        for(j=1; x < a[i][1];j++){
            
            if(j%a[i][0] != 0){
                x++;
                //cout << x <<a[i][0]<<j<<"\n";
            }
        }
        cout << j-1<<"\n";


    }


    return 0;
}



*/
int main(){
    long long a[1000][2];
    long long x;
    long long j=0;
    int count;

    cin >> count;
    for(int i=0;i<count;i++){
        cin >> a[i][0] >>a[i][1];
    }
    //cout 

    for(int i=0;i<count;i++){
        cout << (a[i][0]*a[i][1]-1)/(a[i][0]-1);
        if(i-count !=1){
            cout<<"\n";
        }
    }
}