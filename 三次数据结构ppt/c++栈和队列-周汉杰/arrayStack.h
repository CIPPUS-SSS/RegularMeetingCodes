//
// Created by miller on 16-3-25.
//

#ifndef DATA_STRUCTURES_ARRAYSTACK_H
#define DATA_STRUCTURES_ARRAYSTACK_H
template <class T,int maxSize>
class ArrayStack{
private:
    T _eles[maxSize];
    int _head;
public:
    ArrayStack():_head(-1){}
    bool pop();
    T top();
    bool push(T ele);
    bool empty();
    int size();
};
template <class T,int maxSize>
bool ArrayStack<T,maxSize>::pop() {
    if(_head == -1)
        return false;
    _head --;
    return true;
}
template <class T,int maxSize>
T ArrayStack<T,maxSize>::top() {
    if(_head == -1)
        return false;
    return _eles[_head];
}
template <class T,int maxSize>
bool ArrayStack<T,maxSize>::push(T ele) {
    if(_head == maxSize)
        return false;
    _eles[++_head] = ele;
    return true;
}
template <class T,int maxSize>
bool ArrayStack<T,maxSize>::empty() {
    if(_head == -1)
        return true;
    return false;
}
template <class T,int maxSize>
int ArrayStack<T,maxSize>::size() {
    return _head + 1;
}

#endif //DATA_STRUCTURES_ARRAYSTACK_H
