#include <iostream>
#include<stdlib.h>
// Función para mover el cursor a una posición específica en la consola
void gotoxy(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}

int main() {
    // Mover el cursor a la posición (10, 20)
    gotoxy(10, 20);

    // Imprimir algo en esa posición
    std::cout << "Hola Mundo";

    system("pause");
    return 0;
}