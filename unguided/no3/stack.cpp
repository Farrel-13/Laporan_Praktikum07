#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

int isEmpty(Stack S) {
    return S.Top == 0;
}

void push(Stack &S, infotype x) {
    if (S.Top < MAX) {
        S.info[S.Top] = x;
        S.Top++;
    } else {
        cout << "Stack penuh." << endl;
    }
}

infotype pop(Stack &S) {
    if (!isEmpty(S)) {
        S.Top--;
        return S.info[S.Top];
    }

    cout << "Stack kosong." << endl;
    return -1;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
        return;
    }

    cout << "[TOP] ";
    for (int i = S.Top - 1; i >= 0; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int kiri = 0;
    int kanan = S.Top - 1;

    while (kiri < kanan) {
        infotype temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}

void getInputStream(Stack &S) {
    char input;

    cout << "Masukkan angka: ";

    while (cin.get(input) && input != '\n') {
        if (input >= '0' && input <= '9') {
            push(S, input - '0');
        }
    }
}