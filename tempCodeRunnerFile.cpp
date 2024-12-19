#include<bits/stdc++.h>
using namespace std;

int N, A[201];

int main(){
    cin >> N;
    for(int i = 0; i<N; i++) cin >> A[i];

    int counter = 0;
    while(true){
        bool exist_odd = false;
        for(int i = 0; i < N; i++){
            if(A[i]%2!=0){
                exist_odd = true;
            }
        }
        if(exist_odd) break;

        for(int i = 0; i<N; i++){
            A[i] /= 2;
        }

        ++counter;
    }

    cout << counter << endl;
}