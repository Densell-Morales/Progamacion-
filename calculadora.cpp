#include "iostream"
#include "string"


using namespace std;

int main()
{
    int nm1, nm2, sum1, rest1, mult1, div1;

        cout << "Ingrese la primera cantidad para la operacion" << ;
    cin>> nm1;
    cout << "Ingrese la segunda cantidad para la operacion" << ;
    cin>> nm2;

    sum1= nm1+nm2;
    rest1= nm1-nm2;
    mult1= nm1*nm2;
    div1= nm1/nm2;

    cout << "La suma tiene un resultado de" << sum1 <<  ;
    cout << "La resta tiene un resultado de" << rest1 <<  ;
    cout << "La multiplicación tiene un resultado de" << mult1 <<  ;
    cout << "La suma división un resultado de" << div1 <<  ;


    return 0;
}