#include <iostream>
#include <conio.h>
using namespace std;

const int MAXSTACK = 100;

typedef int ItemType;
typedef struct {
    ItemType Item[MAXSTACK];
    int Count;
} Stack;

void inisialisasi(Stack *S) {
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}

void Pop(Stack *S, ItemType *x){
    if (S->Count==0)
    cout << "Stack Kosong!" << endl;
    else{
        --(S->Count);
        *x = S->Item[S->Count];
    }
}

void Push(ItemType x, Stack *S){
    if (S->Count==MAXSTACK)
    cout << "Stack penuh!" <<endl;
    else{
        S->Item[S->Count]=x;
        ++(S->Count);
    }
}

int main(){
}