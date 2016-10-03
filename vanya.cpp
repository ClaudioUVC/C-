#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    double radio,posible,posible2;
    cin >> n;
    cin >> l;
    int a[n];
    int calle[l+1]={};
    for(int i=0; i<n; i+=1){
        cin >> a[i];
    }
    size_t size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    radio=1;
    posible2=0.000000000000000;
    posible=0.000000000000000;
    for(int j=0; j<n; j+=1){
        if(j==0){
            posible=a[j];
            if(posible>radio){
                radio=posible;
            }
        }else{
            if(j==n-1){
                posible=l-a[j];
                posible2=(a[j]-a[j-1])/2.000000000000000;
                if(posible>radio){
                    radio=posible;
                }
                if(posible2>radio){
                    radio=posible2;
                }
            }else{
                posible=(a[j]-a[j-1])/2.000000000000000;
                if(posible>radio){
                    radio=posible;
                }
            }
        }
    }
    cout.precision(15);
    cout << fixed << radio;
    return 0;
}
