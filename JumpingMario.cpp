#include<bits/stdc++.h>
using namespace std;

int highC(string listaAlturas, int cantidad){
    int monto;
    monto=0;
    int tamano;
    tamano=cantidad*2;
    for(int l=0; l<tamano; l+=2){
            int alturaActual;
            int alturaAnterior;
            alturaActual = listaAlturas[l] - '0';
            alturaAnterior = listaAlturas[l-2] - '0';
            if(l>1){
                if(alturaActual<alturaAnterior){
                    monto+=1;
                }
            }
    }
    return monto;
}

int lowC(string listaAlturas, int cantidad){
    int monto;
    monto=0;
    int tamano;
    tamano=cantidad*2;
    for(int k=0; k<tamano; k+=2){
            int alturaActual;
            int alturaAnterior;
            alturaActual = listaAlturas[k] - '0';
            alturaAnterior = listaAlturas[k-2] - '0';
            if(k>1){
                if(alturaActual>alturaAnterior){
                    monto+=1;
                }
            }
    }
    return monto;
}

int main(){
    int test;
    cout << ">> How many test cases you want?: ";
    cin >> test;
    int murallas[test];
    int highJumps[test];
    int lowJumps[test];
    string alturas[test];
    for(int a=0 ; a < test ; a+=1){
        cout << ">> " << a+1 << "| Number of Walls: ";
        cin >> murallas[a];
        cout << ">> Heights: ";
        getline(cin,alturas[a]);
        highJumps[a]=highC(alturas[a],murallas[a]);
        lowJumps[a]=lowC(alturas[a],murallas[a]);
    }
    cout << "-----------------------------------------" << endl;
    for(int h=1; h <= test; h+=1){
        cout << ">> Case " << h << ": " << highJumps[h-1] << " " << lowJumps[h-1] << endl;
    }
    return 0;
}
