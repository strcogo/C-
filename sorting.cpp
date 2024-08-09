#include <iostream>

void bolhaM(int vetor[], int num){

    int j, i, aux;
    bool check = true;

    for(j=0;j<num and check;j++){
        check = false;
        for(i=0; i < num - 1;i++){
            if(vetor[i] > vetor[i+1]){
                check = true;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}

void insertion(int vetor[], int num){

    int i, aux, j;

    for(j=1; j < num; j++){
        aux = vetor[j];
        i = j - 1;
        while(i >= 0 and vetor[i] > aux){
            vetor[i+1] = vetor[i];
            i--;
        }
        vetor[i+1] = aux;
    }
}

void selection(int vetor[], int num){

    int aux, min, j, i;

    for(j=0;j<num - 1;j++){
        min = j;
            for(i=j+1;i<num;i++){
                if(vetor[min] > vetor[i]);
                        min = i;
            }
    }
    aux = vetor[j];
    vetor[j] = vetor[min];
        vetor[min] = aux;
}



void randomizar(int vetor[], int num){

    for(int j=0; j < num; j++)
        vetor[j] = std::rand() % 100 + 1;

}



int main(){

    std::srand(time(NULL)); 
    
    int vet[20];
    int num = 20, j;

    randomizar(vet,num);
    bolhaM(vet,num);

    for(j = 0; j < num; j++)
        std::cout << vet[j] << " ";

    randomizar(vet,num);
    insertion(vet,num);
    std::cout << std::endl;

    for(j = 0;j<num;j++)
        std::cout << vet[j] << " ";

    randomizar(vet,num);
    selection(vet,num);
    std::cout << std::endl;

    for(j=0;j<num;j++)
        std::cout << vet[j] << " ";
    
    return 0;
}
