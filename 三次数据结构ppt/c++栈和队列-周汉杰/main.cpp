#include <iostream>
#include <time.h>
#include "chainStack.h"
#include "arrayStack.h"
#include <stack>
using namespace std;
void array_stack();
void chain_stack();
void STL_stack();
int main() {
    clock_t start,end; // typedef long clock_t

    start = clock();
    array_stack();
    end = clock();
    cout <<"栈的数组实现时间:"<< end-start << "ms" <<endl;

    start = clock();
    chain_stack();
    end = clock();
    cout <<"栈的链式实现时间:"<< end-start << "ms" <<endl;

    start = clock();
    STL_stack();
    end = clock();
    cout <<"STL栈时间:"<< end-start << "ms" <<endl;
    return 0;
}
void array_stack(){
    ArrayStack<char,100> charStack;
    for(int i = 0;i<100;i++)
        charStack.push('a');
    while(!charStack.empty()){
        char tmp = charStack.top();
        charStack.pop();
    }
}
void chain_stack(){
    ChainStack<char> charStack;
    for(int i = 0;i<100;i++)
        charStack.push('a');
    while(!charStack.empty()){
        char tmp = charStack.top();
        charStack.pop();
    }
}
void STL_stack(){
    stack<char> charStack;
    for(int i = 0;i<100;i++)
        charStack.push('a');
    while(!charStack.empty()){
        char tmp = charStack.top();
        charStack.pop();
    }
}