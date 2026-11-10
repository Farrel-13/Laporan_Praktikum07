#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;

    createStack(S);

    cout << "Hello world!" << endl;

    getInputStream(S);

    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}