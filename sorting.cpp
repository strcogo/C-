
#include <iostream>

void bolhaM(int vetor[], int num, int *trocas, int*comps){

    int j, i, aux;
    bool check = true;

    for(j=0;j<num and check;j++){
        check = false;
        for(i=0; i < num - 1;i++){
            (*comps)++;
            if(vetor[i] > vetor[i+1]){
                check = true;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                (*trocas)++;
            }
        }
    }
}

void insertion(int vetor[], int num, int *trocas, int*comps){

    int i, aux, j;

    for(j=1; j < num; j++){
        aux = vetor[j];
        i = j - 1;
        while(i >= 0 and vetor[i] > aux){
            (*comps)++;
            (*trocas)++;
            vetor[i+1] = vetor[i];
            i--;
        }
        vetor[i+1] = aux;
        (*trocas)++;
    }
}

void selection(int vetor[], int num, int *trocas, int*comps) {
    int aux, min, j, i;

    for(j = 0; j < num - 1; j++) {
        min = j;
        for(i = j + 1; i < num; i++) {
            if(vetor[min] > vetor[i]) {
                min = i;
            }
            (*comps)++;
        }
        (*trocas)++;
        aux = vetor[j];
        vetor[j] = vetor[min];
        vetor[min] = aux;
    }
}



void randomizar(int vetor[], int vetor2[], int vetor3[], int num){

    for(int j=0; j < num; j++){
        vetor[j] = std::rand() % 100 + 1;
        vetor2[j] = vetor[j];
        vetor3[j] = vetor[j];
    }

}



int main(){

    std::srand(time(NULL)); 
    
    int vet[30], vet2[30], vet3[30], trocast[3] = {0,0,0}, compt[3] = {0,0,0};
    int num = 30, j = 0, comp = 0, trocas = 0;

    do{
    std::cout  << j+1 << "° Rodada ";
    randomizar(vet,vet2,vet3,num);
    
    bolhaM(vet,num, &trocas, &comp);
    std::cout << "Bolha: trocas " << trocas << " comparacoes " << comp << " | ";
    trocast[0] += trocas; compt[0] += comp;
    comp = 0; trocas = 0;
    
    insertion(vet2,num, &trocas, &comp);
    std::cout << "Insertion: trocas "<< trocas << " comparacoes " << comp << " | ";
    trocast[1] += trocas; compt[1] += comp;
    comp = 0; trocas = 0;

    selection(vet3,num, &trocas, &comp);
    std::cout << "Selection: trocas "<< trocas << " comparacoes " << comp << " " << std::endl;
    trocast[2] += trocas; compt[2] += comp;
    comp = 0; trocas = 0;
    j++;
    }while(j < 10);

    std::cout << std::endl << "- Média de trocas Bolha Melhorado: " << trocast[0]/10 << " média de comparacoes Bolha Melhorado: " << compt[0]/10; 
    std::cout << std::endl << "- Média de trocas Insertion: " << trocast[1]/10 << " média de comparacoes Insertion: " << compt[1]/10;
    std::cout << std::endl << "- Média de trocas Selection: " << trocast[2]/10 << " média de comparacoes Selection: " << compt[2]/10 << std::endl;
    return 0;
}
