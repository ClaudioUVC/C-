#include<bits/stdc++.h>
using namespace std;

int main(){
    int k = 1;
    int contador = 0;
    while(k!=0){
        if(contador!=0){
            cout << endl;
        }
        cin >> k;
        contador+=1;
        if(k==0){
            break;
        }
        if(k!=0){
            int S[k];
            for(int i=0;i<k;i+=1){
                cin >> S[i];
            }
            for(int j=0; j<=k-6; j+=1){
                for(int q=0; q<=k-6; q+=1){
                    for(int t=0; t<=k-6; t+=1){
                        for(int w=0; w<=k-6; w+=1){
                            for(int e=0; e<=k-6; e+=1){
                                for(int y=0; y<=k-6; y+=1){
                                    if(S[j]<S[q+1] && S[q+1]<S[t+2] && S[t+2]<S[w+3] && S[w+3]<S[e+4] && S[e+4]<S[y+5] && S[j]<S[y+5]){
                                        cout << S[j] << " " << S[q+1] << " " << S[t+2] << " " << S[w+3] << " " << S[e+4] << " " << S[y+5]<< endl;
                                    }
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
