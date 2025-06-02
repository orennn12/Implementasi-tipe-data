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

int main(){
}