#include<bits/stdc++.h>
using namespace std;

int findSum(int N){
    int sum = 0;
    while(N>0){
        sum += N % 10;
        N /= 10;
    }

    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int counter = 0;

    for(int i = 1; i <= N; ++i){
        int sum = findSum(i);
        if(sum>=A && sum<=B){
            counter += i;
        }
    }

    cout << counter << endl;

    return 0;

}