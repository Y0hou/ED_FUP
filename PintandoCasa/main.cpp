#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()  {

float ladoA {0};
float ladoB {0};
float ladoC {0};

float p;

cin >> ladoA;
cin >> ladoB;
cin >> ladoC;

p = (ladoA + ladoB + ladoC) / 2;
p = p*(p - ladoA)*(p - ladoB)*(p - ladoC);

cout << setprecision(2);
cout << fixed;
cout << sqrt(p);

return 0;
}



