//
// Created by Mohamed on 5/27/2021.
//

#ifndef LINKED_LIST_STACK_HPP
#define LINKED_LIST_STACK_HPP

#include "DoubleLinkedList.hpp"

template <typename T> class Stack : private DoubleLinkedList<T>{
public:
    Stack(int element) : DoubleLinkedList<T>(element){}
    Stack(): DoubleLinkedList<T>(){}
    T top(){ return DoubleLinkedList<T>::getHeadValue(); }
    T pop(){
        T rtn = DoubleLinkedList<T>::getHeadValue();
        DoubleLinkedList<T>::delElement(0);
        return rtn;
    }
    void push(T element){DoubleLinkedList<T>::addFirst(element);}
};

#endif //LINKED_LIST_STACK_HPP
