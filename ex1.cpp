#include <iostream>

using namespace std;


// ex1
float power(float base, float expoente){

    float resultado = 1;

    if(expoente == 1)
        return base;
    if(expoente == 0)
         return 1;
    if(expoente < 0){
        base = 1/base;
        expoente *= -1;
    }

    for(int j = 0; j < expoente; j++){
        resultado *= base;
    }

    return resultado;
}


// ex2
float log(float a, float b){
    float j = 0, aux = 1;

    while (aux < a){
        aux *= b;
        j++;
    }
    if(aux == a)
        return j;
    else
        return 0;
}

// ex3
bool palindromo(string string){

    int j, k = string.length();

    for(j = 0; j < string.length(); j++){
        if(string[j] != string[k-1])
            return false;
        k--;
    }
    return true;



    return true;
}


int main(){

    char repeat;
    int option;

    do{
        cout << "Oque deseja fazer?" << endl;
        cout << "1 - potenciacão / 2 - logarítimo / 3 - palindromo" << endl;
        cin >> option;
    
        switch(option){
            float aux1, aux2;
            string aux3;

            case(1):
                cin >> aux1 >> aux2 


        }


    }while(repeat == 'Y' or repeat == 'y')



    cout << power(3.0, 1.0) << endl;
    cout << log(81.0,3.0) << endl;
    cout << palindromo("arara") << endl;
    cout << palindromo("alvaro") << endl;

    return 0;
}
