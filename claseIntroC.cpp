#include <iostream>
#include <string>

using namespace std;

// Función para sumar dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    cout << "Hola Mundo" << endl;

    // 1. Tipos básicos
    int edad = 21;
    float altura = 1.75f;
    char inicial = 'S';
    bool esBiologo = false;

    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "¿Es biólogo? " << esBiologo << endl;

    // 2. Tipos derivados
    string nombre = "Pedrito";
    int numeros[4] = {1, 2, 3, 4};

    cout << "Nombre: " << nombre << endl;
    cout << "Segundo número: " << numeros[1] << endl; // Cambiado a índice válido

    // 3. Operadores
    int num1 = 5, num2 = 4;
    
    // Aritméticos
    cout << "Suma: " << num1 + num2 << endl;
    cout << "Residuo: " << num1 % num2 << endl;
    
    // Relacionales
    cout << "¿5 > 4? " << (num1 > num2) << endl;
    
    // Lógicos
    if(num1 > num2 && num2 > 0) {
        cout << "5 es mayor que 4 y 4 es mayor que 0" << endl;
    }

    // 4. Estructuras de control
    // Switch
    switch(num2) {
        case 4: cout << "Es un cuatro" << endl; break;
        case 2: cout << "Es un dos" << endl; break;
        default: cout << "Otro número" << endl;
    }

    // For
    cout << "\nContando hasta 5:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // While
    cout << "\nContando hasta 5 con while:" << endl;
    int contador = 1;
    while(contador <= 5) {
        cout << contador << " ";
        contador++;
    }
    cout << endl;

    // Do-while
    cout << "\nContando hasta 5 con do-while:" << endl;
    contador = 1;
    do {
        cout << contador << " ";
        contador++;
    } while(contador <= 5);
    cout << endl;

    // 5. Funciones
    cout << "\nSuma de 3 + 7: " << sumar(3, 7) << endl;

    return 0;
}