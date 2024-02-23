#include <iostream>

using namespace std;

int main(){

    int a, b, z, j, i;

    do{
    cout << "digite 'a' e 'b' ";
        cin >> a >> b;
    }while(b < a);

    do{
    cout << "digite o valor 'z' ";
    cin >> z;
    }while(z <= b);
    
    for(j = a;j < b; j++){
        for(i = b; i > a; i--){
            if(i + j == z){
                 cout << j << " + " << i << " = " << z << endl;
            }
        }
   

    }











    return 0;
}
