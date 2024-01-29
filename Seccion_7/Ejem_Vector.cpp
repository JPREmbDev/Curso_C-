#include <iostream>
#include <vector>


using namespace std;

int main()
{
    // clase vector -> <tipo de vector> + nombre
    vector<int> records;

    vector<char> letras;
    //hasta aquí ambos vectores estan vacios.

    // Almacenará 5 datos de tipo entero
    // Ya no es un vector vacio
    // Sino especificamos se almacenará un '0'
    // en el tipo char -> caracter indeterminado
    vector<int> partidos(5);
    vector<char> caracter(10);



    for(int i=0;i<5;i++)
    {
        cout << partidos[i] << endl;
        //cout << caracter[i] << endl;
    }



    // Otra forma de inicializarlo:
    vector<int> rec {25,45,60,20};
    caracter = {'z','a','b'};
    for(int j=0;j<4;j++)
    {
        cout << rec[j] << endl;
        cout << caracter[j] << endl;
    }


    // Nº de elementos, el valor de esas elementos
    vector <double>  salarioBase (350,2125.50);
    cout << salarioBase[10] << endl;
    cout << salarioBase[100] << endl;
    cout << salarioBase[349] << endl; 


    //bucles indeterminados:
    /*
    for -> Bucle determinado -> sabemos su inicio y su fin
    while -> es un bucle indeterminado, es hasta cierta condicion
    */

   int iter=0;

   while (iter<salarioBase.size())
   {
    /* code */
    cout << salarioBase[iter] << endl;
    iter++;
   }
   


    return 0;
}