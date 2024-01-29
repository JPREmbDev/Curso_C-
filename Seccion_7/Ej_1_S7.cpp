#include <iostream>
#include <vector>

using namespace std;

vector<int> use_array() {
    // ----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // ----WRITE YOUR CODE BELOW THIS LINE----

    // {} -> {} indica una inicialización de lista en C++
    int arr[10]{};

    for (int i = 0; i < 10; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Asignar 100 al primer elemento y 1000 al último elemento
    arr[0] = 100;
    arr[9] = 1000;

    // -----WRITE YOUR ABOVE THIS LINE----
    // -----DO NOT CHANGE THE CODE BELOW THIS LINE----

    /*
    Creación de un vector a partir del array: La línea vector<int> v(arr, arr + sizeof arr / sizeof arr[0]); 
    crea un vector v a partir de los elementos del array. La expresión arr + sizeof arr / sizeof arr[0] representa un puntero al final del array.
    */
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}
