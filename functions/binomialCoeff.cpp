#include <iostream>
using namespace std;
// WAF to find the binomial coeff for given n and r;
// n C r = n ! / r ! (n-r) !

int factorial (int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int binomial(int n, int r) {
    int binomialCoeff = factorial(n) / (factorial(r)*factorial(n-r));
    cout<<binomialCoeff;
    return binomialCoeff;
}

int main(){

    int n = 5;
    int r = 2;
    binomial(n,r);
    return 0;
}