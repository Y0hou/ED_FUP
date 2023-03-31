#include <iostream>

using namespace std;

bool altura(int tam, int *domino){
    for(int i {0}; i < tam; i++){
        for(int j {0}; j < i; j++){
            if(domino[j] > domino[i]){
                return false;
            }
        }
    }
    return true;
}

int main() {

    int tam;
    cin >> tam;

    int *domino = new int [tam];

    for(int i {0}; i < tam; i++ ){
        int local {0};
        cin >> local;
        domino[i] = local;
    }

    if( altura(tam, domino) == false){
        cout << ("precisa de ajuste");
    } else{
        cout << ("ok");
    }

    return 0;
}