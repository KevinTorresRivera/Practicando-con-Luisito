#include <iostream>
#include <cmath>
using namespace std;

double elevate(double,int);

using namespace std;

int main(){

    double number1;
    int number2;

    cout << "Enter the first number " <<endl;
    cin >> number1;

    cout << "Enter the second number" <<endl;
    cin>> number2;


    return 0;
}

double elevate(double number, int potencia){
        double exponent= pow(number, potencia);

        return exponent;
}
        
