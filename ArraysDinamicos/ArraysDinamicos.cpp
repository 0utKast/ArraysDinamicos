#include <iostream>

int main()
{
    std::cout << "Escribe un entero positivo: ";
    int tamanho{};
    std::cin >> tamanho;

    int* array{ new int[tamanho] {} }; // usa new array. observa que tamanho no necesita ser constante

    std::cout << "Hemos asignado un array de integers de tamanho " << tamanho << '\n';

    array[0] = 5; // asigna al elemento de índice 0 el valor 5

    delete[] array; // usamos delete array pra desasignar array 

    // no necesitamos configurar array a nullptr, pero sólo 
    //porque sale de alcance inmediatamente después de usar delete

    return 0;
}





int main() {

    int* array = new int[5];
    array[0] = 9;
    array[1] = 7;
    array[2] = 5;
    array[3] = 3;
    array[4] = 1;



    int arrayFijo[5] = { 9, 7, 5, 3, 1 }; // inicializa un array fijo antes de C++11

    int arrayFijo2[] { 4, 5, 3, 1, 1 }; // el tamaño es opcional si tiene inicializadores

    int* array{ new int[5] { 9, 7, 5, 3, 1 } }; // inicializa un array dinámico desde C++11
    // Para evitar escribir dos veces el tipo, podemos usar auto. 
    //muy útil para tipos con nombres largos.
    auto* array{ new int[5]{ 9, 7, 5, 3, 1 } };

}


#if 0

#endif