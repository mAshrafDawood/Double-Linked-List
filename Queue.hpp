//
// Created by Mohamed on 5/27/2021.
//

#ifndef LINKED_LIST_QUEUE_HPP
#define LINKED_LIST_QUEUE_HPP

#include "DoubleLinkedList.hpp"

template <typename T> class Queue : private DoubleLinkedList<T>{
public:
    Queue(int element) : DoubleLinkedList<T>(element){}
    Queue(): DoubleLinkedList<T>(){}
    T next(){ return DoubleLinkedList<T>::getHeadValue(); }
    T pop(){
        T rtn = DoubleLinkedList<T>::getHeadValue();
        DoubleLinkedList<T>::delElement(0);
        return rtn;
    }
    void push(T element){DoubleLinkedList<T>::addLast(element);}
};

#endif //LINKED_LIST_QUEUE_HPP
