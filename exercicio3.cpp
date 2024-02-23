#include <iostream>

using namespace std;

int main(){

    int i , j , isCousin;
    
        for(i = 100; i <= 500 ; i++){
            isCousin = 1;
            for(j = 2; j < i; j++){
                if(i % j == 0){
                    isCousin = 0;
                    j = i;
                }
            }
            if(isCousin == 1){
                cout << i << " ";       
                }    
        }
    return 0;
}
