/*
Declaring, Initializing and Accessing Vectors
Declare a vector of integers named vec  and initialize the vector to 10,20,30,40, and 50 

Modify the first element of the vector to be 100  and modify the last element of the vector to be 1000 .

The final vector should then be 100, 20, 30, 40, and 1000.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure 
you give it a go yourself first, and only check the solution if you really get stuck.
*/

#include <vector>
using namespace std;

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
/*
std::vector<int> vec {10, 20, 30, 40, 50};

Esta línea utiliza la biblioteca estándar de C++ (std::vector) para declarar e inicializar un vector llamado vec.
{10, 20, 30, 40, 50} representa una inicialización de lista, que establece los elementos del vector con los valores proporcionados.
Este método de inicialización es más moderno y flexible, especialmente cuando no sabes de antemano el tamaño del vector.
*/

    vector<int> vec {10, 20, 30, 40, 50};
    
    vec[0] = 100;
    vec[4] = 1000;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}