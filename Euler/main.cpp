#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(double N){
    double b {1}; 
    while(N > 1){
        b = b*N;
        N--;
    }
    return b;
}

double euler(double N){
    double E {2};
    while(N > 1){
        E = E + (1 / fatorial(N));
        N--;
    }
    return E;
}



int main() {

    double N {1};
    cin >> N;

    cout << setprecision(6);
    cout << fixed;
    cout << euler(N);


    return 0;
}