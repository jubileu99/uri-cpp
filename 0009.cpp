#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,cont=0;
    double nota[3];

    cout.setf(ios_base::fixed);
    cout.precision(1);

    cin >> n;

    double media[n-1];

    while(cont < n){
        cin >> nota[0] >> nota[1] >> nota[2];
        media[cont] = (nota[0]*2 + nota[1]*3 + nota[2]*5)/10;
        cont++;
    }
    cont = 0;
    while(cont < n){
        cout << media[cont] << endl;
        cont++;
    }

    return 0;
}