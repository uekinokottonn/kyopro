#include<bits/stdc++.h>
using namespace std;

int N, A[201];

int main(){
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    int counter = 0;
    while(true){
        bool gya = false;
        for(int i = 0; i < N; i++){
            if(A[i]%2!=0){
                gya = true;
            }
        }
        
        if(gya) break;

        for(int i = 0; i < N; i++){
            A[i] /= 2;
        }

        ++counter;
    }

    cout << counter << endl;
}