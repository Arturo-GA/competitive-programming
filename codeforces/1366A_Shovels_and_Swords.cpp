#include <bits/stdc++.h>
using namespace std;


int main(){
    int a=0,b=0,c=0,diamonts=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        diamonts=0;
        cin >>b>>c;

        diamonts = min({b,c,(b+c)/3});
        cout <<diamonts<<"\n";
    }

    return 0;
}





/*

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0,b=0,c=0,diamonts=0;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        diamonts=0;
        cin >>b>>c;

        while (2 < c+b&&c>0&&b>0)
        {

            if(b>c*2){
                c=0;
                diamonts +=c;
                //cout<<diamonts<<" cero "<<"\n";
            }
            else if(c>b*2){
                c=0;
                diamonts +=b;
                //cout<<diamonts<<" primero "<<"\n";
            }


            else if((abs(b-c)==1||b==c)&&b/3>0){
                diamonts += (b/3)*2;
                b -= (b/3)*3;
                c -= (c/3)*3;
                //cout<<diamonts<<" segundo "<<"\n";
            }

            else if(b-c==1){
                b -= 2;
                c--;
                diamonts++;
                //cout<<diamonts<<" tercer "<<"\n";
            }
            else if (c-b==1){
                c -=2;
                b--;
                diamonts++;
                //cout<<diamonts<<" last "<<"\n";
            }
            else if(c>b){
                int ret=   min(b,(c-b)/2);
                c -= 2*ret;
                b -=ret;

                diamonts +=ret;
                //cout<<diamonts<<" primero "<<"\n";
            }
            else if(b>c){
                int ret=   min(c,(b-c)/2);
                b -= 2*ret;
                c -= ret;

                diamonts +=ret;
                //cout<<diamonts<<" primero "<<"\n";
            }
            else if(b==c && b>1){
                diamonts ++;
                b-=2;
                c--;
                //cout<<diamonts<<" primero "<<"\n";
            }
        }
        

        cout<<diamonts<<"\n";
    }
    

    return 0;
}

*/