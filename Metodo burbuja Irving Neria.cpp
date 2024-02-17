#include <iostream>

using namespace std;

// Función para ordenar el arreglo en orden ascendente
void bubbleSortAsc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambiar elementos
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Función para ordenar el arreglo en orden descendente
void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Intercambiar elementos
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 87, 3, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Ordenar en orden ascendente
    bubbleSortAsc(arr, n);
    cout << "Arreglo ordenado en orden ascendente: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Orden descendente
    bubbleSortDesc(arr, n);
    cout << "Arreglo ordenado en orden descendente: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}