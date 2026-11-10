#ifndef STACK_H
#define STACK_H

#define MAX 20

typedef int infotype;

struct Stack {
    infotype info[MAX];
    int Top;
};

void createStack(Stack &S);
int isEmpty(Stack S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype x);

#endif