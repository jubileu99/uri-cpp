#include <bits/stdc++.h>

using namespace std;

int main(){

    int n[99],cont=0,maiorValor=0,posicao;

    while(cont < 100){
        cin >> n[cont];
        if(n[cont] > maiorValor){
            maiorValor = n[cont];
            posicao = cont+1;
        }
        cont++;
    }

    cout << maiorValor << endl << posicao << endl;

    return 0;
}