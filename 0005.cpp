#include <bits/stdc++.h>

using namespace std;

int main(){

    int i=2,n,fibo[46]; 
    
    cin >> n;

    fibo[0] = 0;
    fibo[1] = 1;

    if(n == 1){
        cout << fibo[0] << " ";
    }else if(n == 2){
        cout << fibo[0] << " ";
        cout << fibo[1] << " ";

    }

    while(i<n){
        
        

        fibo[i] = fibo[i-1] + fibo[i-2];

        cout << fibo[i] << " ";

        i++;
        
    }
    
    cout << endl;

    return 0;
}