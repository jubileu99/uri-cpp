#include <bits/stdc++.h>

using namespace std;

int main(){

    int x,y,soma=0,cont;

    cin >> x >> y;

    if(x > y){
        cont = y+1;
        while(cont < x){
            if(cont%2 != 0){
                soma = soma + cont;
            }
            cont++;
        }
    }else if(y > x){
        cont = x+1;
        while(cont < y){
            if(cont%2 != 0){
                soma = soma + cont;
            }
            cont++;
        }
    }else if(x == y){
        soma = 0;
    }

    cout << soma << endl;

    return 0;
}