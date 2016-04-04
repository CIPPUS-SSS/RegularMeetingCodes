//
// Created by miller on 16-3-24.
//

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H
template <class T>
class ChainNode{
public:
    T data;
    ChainNode<T>* next;
public:
    ChainNode(T d):data(d),next(0){}
    ~ChainNode(){}
};
template <class T>
class ChainStack{
private:
    ChainNode<T>* _head;
    int _size;
public:
    ChainStack():_head(0),_size(0){}
    bool pop();
    T top();
    void push(T ele);
    bool empty();
    int size();
};
template <class T>
bool ChainStack<T>::pop() {
    if(_size == 0){
        return false;
    }
    else{
        ChainNode<T>* tmp = _head;
        _head = tmp->next;
        delete tmp;
        _size--;
        return true;
    }
}
template <class T>
T ChainStack<T>::top() {
    if(_size == 0){
        return 0;
    }
    else{
        return _head->data;
    }
}
template <class T>
void ChainStack<T>::push(T ele) {
    if(_head == 0){
        _head = new ChainNode<T>(ele);
    }
    else{
        ChainNode<T> * tmp = new ChainNode<T>(ele);
        tmp->next = _head;
        _head = tmp;
    }
    _size ++;
}
template <class T>
bool ChainStack<T>::empty() {
    if(_size == 0)
        return true;
    else
        return false;
}
template <class T>
int ChainStack<T>::size() {
    return _size;
}
#endif //DATA_STRUCTURES_STACK_H
