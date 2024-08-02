#include <iostream>


void bolha(int vet[]){

    int j, i, aux;

    for(j=0;j<10;j++){
        for(i=0;i<9;i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;

            }
        }
    }
}

void bolhaM(int vet[]){
    
    int j, i, aux;
    bool teste = true;
    
    for(j=0;j<10 and teste == true;j++){
        teste = false;
        for(i=0;i<9;i++){
            if(vet[i] > vet[i+1]){
                teste = true;
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
}

void randomizarVetor(int vet[]){

    int j;

    std::srand(time(NULL));
    
    for(j=0;j<10;j++){
        vet[j] = std::rand() % 10000;


    }
}


int main(){

    int vetor[10];
    int j;
    
    randomizarVetor(vetor);
    bolha(vetor);

    for(j=0;j<10;j++){
        std::cout << vetor[j] << " ";
    }

    randomizarVetor(vetor);
    bolhaM(vetor);

    std::cout << std::endl;

    for(j=0;j<10;j++){
        std::cout << vetor[j] << " ";
    }



    return 0;
}   






