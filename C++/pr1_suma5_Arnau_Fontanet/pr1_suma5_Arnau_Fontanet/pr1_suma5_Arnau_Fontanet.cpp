#include <iostream>

using namespace std;

void sumaX(int* p, int n, int x) {
    for (int i = 0; i < n; i++) {
        *(p + i) += x;
    }
}

void restaX(int* p, int n, int x) {
    for (int i = 0; i < n; i++) {
        *(p + i) -= x;
    }
}

void minimX(int* p, int n) {
    if (n <= 0) return;

    int minim = *p;
    for (int i = 1; i < n; i++) {
        if (*(p + i) < minim) {
            minim = *(p + i);
        }
    }
    cout << "El valor minim es: " << minim << endl;
}

void mostrarArray(int* p, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Introdueix la mida n: ";
    cin >> n;

    if (n <= 0) {
        cout << "La mida ha de ser mes gran que 0." << endl;
        return 1;
    }
    int* v = new int[n];

    cout << "Introdueix " << n << " valors:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(v + i);
    }

    cout << "\nArray original:" << endl;
    mostrarArray(v, n);

    int x;
    cout << "Introdueix un valor X per sumar i restar: ";
    cin >> x;

    sumaX(v, n, x);
    cout << "Array despres de sumaX:" << endl;
    mostrarArray(v, n);

    restaX(v, n, x);
    cout << "Array despres de restaX:" << endl;
    mostrarArray(v, n);

    minimX(v, n);

    delete[] v;
    v = nullptr;

    return 0;
}