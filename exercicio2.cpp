#include <iostream>

using namespace std;

int main(){
    int timeAap, timeBap, timeA, timeB, pontos = 0;

    cout << "Digite o placar apostado: ";
    cin >> timeAap >> timeBap;
    cout << "Digite o placar do jogo: ";
    cin >> timeA >> timeB;

    if(timeAap == timeA){
        pontos += 5;
    } 
    if(timeBap == timeB){
        pontos += 5;
    }
    if(timeAap >= timeBap && timeA >= timeB || (timeBap > timeAap && timeB > timeA)){
        pontos += 10;
    }
   

    cout << "Você marcou " << pontos << " pontos.\n";

    return 0;

}
