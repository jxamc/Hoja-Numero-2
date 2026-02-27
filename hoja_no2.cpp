#include <iostream>
#include <iomanip>
using namespace std;

// Nombre: JULIO CESAR XAM CHIVALAN
// Programación III
// Semana IV – Laboratorio Producto

struct Producto {
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto data;
    Nodo* siguiente;
};

int main() {

    Nodo* primero = new Nodo;
    primero->data.codigo = 101;
    primero->data.nombre = "Laptop";
    primero->data.precio = 5500.50;
    primero->siguiente = nullptr;

    Nodo* segundo = new Nodo;
    segundo->data.codigo = 102;
    segundo->data.nombre = "Mouse";
    segundo->data.precio = 150.75;
    segundo->siguiente = nullptr;

    primero->siguiente = segundo;

    Nodo* tercero = new Nodo;
    tercero->data.codigo = 103;
    tercero->data.nombre = "Teclado";
    tercero->data.precio = 300.00;
    tercero->siguiente = nullptr;

    segundo->siguiente = tercero;

    Nodo* aux = primero;

    while (aux != nullptr) {
        cout << "Codigo: " << aux->data.codigo << endl;
        cout << "Nombre: " << aux->data.nombre << endl;
        cout << "Precio: Q" << fixed << setprecision(2)
             << aux->data.precio << endl;
        cout << "-------------------" << endl;

        aux = aux->siguiente;
    }

    aux = primero;
    while (aux != nullptr) {
        Nodo* temp = aux;
        aux = aux->siguiente;
        delete temp;
    }

    primero = nullptr;

    return 0;
}