#include<bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    int nu[2];
    for(int i=1;i<=cases;i+=1){
        for(int j=0;j<=1;j+=1){
            cin >> nu[j];
        }
        int arreglo[nu[0]];
        for(int w=0;w<nu[0];w+=1){
            arreglo[w]=0;
        }
        int updates[nu[1]][3];
        for(int k=0;k<nu[1];k+=1){
            for(int f=0;f<=2;f+=1){
                cin >> updates[k][f];
            }
            for(int e=updates[k][0];e<=updates[k][1];e+=1){
                arreglo[e]=arreglo[e]+updates[k][2];
            }
        }
        int query;
        cin >> query;
        int index[query];
        for(int g=0;g<query;g+=1){
            cin >> index[g];
        }
        for(int r=0;r<query;r+=1){
            cout << arreglo[index[r]] << endl;
        }
    }
    return 0;
}
