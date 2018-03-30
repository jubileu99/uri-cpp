#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int inicioHr,fimHr,inicioMin,fimMin,hrs,min,calc1,calc2,calc;

    cin >> inicioHr >> inicioMin >> fimHr >> fimMin;

    calc1 = (inicioHr*60) + inicioMin; 
    calc2 = (fimHr*60) + fimMin; 
    calc = (calc2-calc1);

    if(inicioHr == fimHr && inicioMin == fimMin){
        hrs = 24;
        min = 0;
    }else if(fimHr > inicioHr){
        hrs = (calc/60);
        min = (calc%60);
    }else if(inicioHr > fimHr){
        hrs = (calc+1440)/60;
        min =  (calc+1440)%60;
    }

    cout << "O JOGO DUROU " <<hrs<<" HORA(S) E "<<min<< " MINUTO(S)" << endl;

    return 0;
}