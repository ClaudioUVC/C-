#include<bits/stdc++.h>
using namespace std;
bool camino(string palabra[],int r, int c,int ra, int ca,int cont){
    string allizzwell = "ALLIZZWELL";
    bool prueba;
    if(cont==0){
        //buscar A
        for(int a=0;a<r;a+=1){
            for(int b=0;b<c;b+1){
                if(palabra[a][b]=='A'){
                    prueba=true*camino(palabra,r,c,a,b,1);
                    if(prueba==true){
                        a=r;
                        b=c;
                        return prueba;
                    }
                }
            }
        }
    }else{
        for(int h=ra-1;h<=ra+1;h+=1){
            for(int t=ca-1;t<=ca+1;t+=1){
                if(h>=0 && h<r){
                    if(t>=0 && t<c){
                        if(palabra[h][t]==allizzwell[cont]){
                            if(cont+1==9){
                                return true;
                            }else{
                                prueba=true*camino(palabra,r,c,h,t,cont+1);
                                if(prueba==true){
                                    h=ra+2;
                                    t=ca+2;
                                    return prueba;
                                }
                            }
                        }else{
                            if(h==ra+1 && t==ca+1){
                                return false;
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(){
    int R,C;
    R=0;
    C=0;
    int test;
    int r,c;
    cin >> test;
    for(int n=0; n<test; n+=1){
        cin >> r;
        cin >> c;
        string palabra[r];
        if(c!=0){
            for(int j=0;j<r;j+=1){
                cin >> palabra[j];
            }
        }
        bool es;
        es=camino(palabra,r,c,0,0,0);
        if(es==true){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
