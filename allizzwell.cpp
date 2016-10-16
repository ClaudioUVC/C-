#include<bits/stdc++.h>
using namespace std;
int camino(string palabra[], int cheq[],int r, int c,int ra, int ca,int cont){
    string allizzwell = "ALLIZZWELL";
    bool prueba;
    if(cont==0){
        //buscar A
        for(int a=0;a<r;a+=1){
            for(int b=0;b<c;b+1){
                if(palabra[a][b]=='A'){
                    if(cheq[(a*c)+b]==0){
                        cheq[(a*c)+b]=1;
                        prueba=1*camino(palabra,cheq,r,c,a,b,1);
                        if(prueba==1){
                            return prueba;
                        }else{
                            cheq[(a*c)+b]=0;
                        }
                    }
                }
            }
        }
        return 0;
    }else{
        for(int h=ra-1;h<=ra+1;h+=1){
            for(int t=ca-1;t<=ca+1;t+=1){
                if(h>=0 && h<r){
                    if(t>=0 && t<c){
                        if(palabra[h][t]==allizzwell[cont]){
                            if(cont+1==10){
                                return 1;
                            }else{
                                if(cheq[(h*c)+t]==0){
                                    cheq[(h*c)+t]=1;
                                    prueba=1*camino(palabra,cheq,r,c,h,t,cont+1);
                                    if(prueba==1){
                                        return prueba;
                                    }else{
                                        cheq[(h*c)+t]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return 0;
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
        int cheq[r*c];
        string palabra[r];
        if(c!=0){
            for(int j=0;j<r;j+=1){
                cin >> palabra[j];
            }
        }
        int es;
        es=camino(palabra,cheq,r,c,0,0,0);
        if(es==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
