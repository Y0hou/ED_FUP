#include <iostream>

using namespace std;

//função booleana para determinar se o numero é primo 
bool primo(int n){
    for(int i {2}; i < n; i++){
        if(n % i == 0){//modulo de n em i se resto 0, numero não é primo
            return false;
        }
    }
    return true;
}

int main() {

int A {0}; //Inicialização das variaveis
int B {0}; 

cin >> A ; //Entrada dos valores
cin >> B ;

for(int i = A; i <= B; i++){
    if(primo(i) == true){//comparação se primo verdade
        cout << i;//Saída se primo for verdade
    }
}

    return 0;
}