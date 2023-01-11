#include <iostream>

using namespace std;
/*
*@Autor:Kevin Quishpe
*Fecha:
*Details:bucle while
*/
int main ()
{
    int a, b=100;
    cout<<"Escoja un numero menor a cien: ";
    cin>>a; 
    while (a>b)
    {
    fflush(stdin);
    cout<<"Escoja un numero menor a cien: ";
    cin>>a; 
    }
    return 0;
}