#include <iostream>
#include <conio.h>
using namespace std;

const int MAXSTACK = 12;

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
        cout << "Pop: " << *x << endl;
    }
}

void Push(ItemType x, Stack *S){
    if (S->Count==MAXSTACK)
    cout << "Stack penuh!" <<endl;
    else{
        S->Item[S->Count]=x;
        ++(S->Count);
        cout << "Push: " << x << endl;
    }
}

Stack dataStack;                 
Stack *pStack = &dataStack;     

void PushStack(ItemType x) {  
    Push(x, pStack);           
}

void PopStack(ItemType *x) { 
    Pop(pStack, x);
}

int main(){
   inisialisasi(pStack);       

    ItemType hasilPop;         
    
    PopStack(&hasilPop); 
    PopStack(&hasilPop);  
    PushStack(10);           
    PushStack(20);          
    PushStack(30);              
    PushStack(40);           
    PushStack(50);          
    PushStack(60);           
    PushStack(70);          
    PushStack(80);              
    PushStack(90);           
    PushStack(100);
    PushStack(70);          
    PushStack(80);              
    PushStack(90);           
    PushStack(100);
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop);    
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop); 
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop); 
    PopStack(&hasilPop);
    PopStack(&hasilPop);
    PopStack(&hasilPop); 
}