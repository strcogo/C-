#include <iostream>

using namespace std;

int main(){
    int vmax, vmotor, multa;
    
    cout << "digite a velocidade maxima da avenida ";
    cin >> vmax;
    cout << "digite a velocidade do motorista ";
    cin >> vmotor;

    if(vmax < vmotor){
        multa = (vmotor - vmax) * 5;
    }
    else{
        multa = 0;
    }
    cout << "a multa foi de R$ " << multa << ",00.\n";
    return 0;
}

