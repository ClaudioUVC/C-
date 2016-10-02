#include<bits/stdc++.h>
using namespace std;

int cumple(int hab[],int ciu,int caj,int prueba){
    int c,totalc,j;
    c=1;
    totalc=0;
    j=0;
    while(j<ciu){
        if((hab[j]-prueba*c)<=0){
            totalc+=c;
            j+=1;
            c=1;
        }else{
            c+=1;
        }
    }
    if(totalc<=caj){
        return 1;
    }else{
        return 2;
    }
}

int main(){
    int n,b,mayor,mid,ini,fin;
    string resultado;
    resultado = "";
    while(true){
        cin >> n;
        cin >> b;
        mayor=0;
        if(n==-1 && b==-1){
            return 0;
        }
        int habitantes[n];
        for(int i=0;i<n;i+=1){
            cin >> habitantes[i];
            if(habitantes[i]>mayor){
                mayor=habitantes[i];
            }
        }
        //BB
        ini=1;
        fin=mayor;
        mid=ini + (fin-ini)/2;
        while(ini<fin){
            mid=ini + (fin-ini)/2;
            if(cumple(habitantes,n,b,mid)==1){
                fin=mid;
            }
            else{
                ini=mid+1;
            }
            mid=ini + (fin-ini)/2;
        }
        cout << mid << endl;
        stringstream ss;
        ss << mid << endl;
        string optistr = ss.str();
        resultado+= optistr;
        cout << endl;
    }
}
