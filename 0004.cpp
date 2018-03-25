#include <iostream>

using namespace std;

int main(){

    int n,n1=0,n2=1,n3=0,cont=0;

    cin >> n;

    if(n == 1){
        cout << n1;
    }else{
        while(cont < n-1){
            if(cont == 0){
                cout << n1;
                cout << " " << n2;
            }else{
                n3 = n1 + n2;
                cout << " "<< n3;
                n1 = n2;
                n2 = n3;
            }
            cont++;
        }
    }

    cout << endl;

    return 0;
}