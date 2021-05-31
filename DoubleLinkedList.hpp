//
// Created by Mohamed on 5/27/2021.
//

#ifndef LINKED_LIST_DOUBLELINKEDLIST_HPP
#define LINKED_LIST_DOUBLELINKEDLIST_HPP

#include <iostream>

template <typename T> class DoubleLinkedList{
private:
    class Node{
    public:
        T info;
        Node *next;
        Node *prev;
        ~Node(){delete next, prev;}
    };
    Node *head, *tail;
public:

    DoubleLinkedList(){
        head = tail = NULL;
    }

    DoubleLinkedList(T element){
        Node * node = new Node;
        node->info = element;
        node->prev = NULL;
        node->next = NULL;
        head = tail = node;
    }

    DoubleLinkedList(T e1, T e2){
        Node *n1 = new Node;
        Node *n2 = new Node;
        n1->info = e1; n2->info = e2;
        n1->next = n2; n1->prev = NULL;
        n2->prev = n1; n2->next = NULL;
        head = n1;
        tail = n2;
    }

    void addFirst(T element){
        Node *node = new Node;
        node->info = element;
        node->prev = NULL;
        node->next = NULL;
        if (head == tail && head != NULL){
            head = node;
            head->next = tail;
            tail->prev = head;
        }
        else if (head == tail && head == NULL){
            tail = head = node;
        }
        else {
            node->next = head;
            head->prev = node;
            head = node;
        }
    }

    void addLast(T element){
        Node *node = new Node;
        node->info = element;
        node->prev = NULL;
        node->next = NULL;

        if (head == tail && tail != NULL){
            tail = node;
            head->next = tail;
            tail->prev = head;
        }
        else if (head == tail && tail == NULL){
            tail = head = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    void insert(T element, int index){
        Node *node = new Node;
        Node *itr = head;
        node->info = element;
        int i = 0;
        while (i < index && itr != NULL){
            i++;
            itr = itr->next;
        }
        if (i == index && i != 0 && itr != NULL){
            itr->prev->next = node;
            node->prev = itr->prev;
            itr->prev = node;
            node->next = itr;
        }
        else if (i == index && i == 0) addFirst(element);
        else if (i == index && itr == NULL) addLast(element);
    }

    void delElement(int index){
        Node *toDel = head;
        int i = 0;
        while (i < index && toDel != NULL){
            i++;
            toDel = toDel->next;
        }
        if (toDel->prev != NULL) toDel->prev->next = toDel->next;
        else head = toDel->next;
        if (toDel->next != NULL) toDel->next->prev = toDel->prev;
        else tail = toDel->prev;
        delete &toDel;
    }

    void printList(){
        Node *itr = head;
        while ( itr != NULL){
            std::cout << itr->info << " <--> ";
            itr = itr->next;
        }
        std::cout << "NULL";
    }

    T getHeadValue(){
        return head->info;
    }

    T getTailValue(){
        return tail->info;
    }

};

#endif //LINKED_LIST_DOUBLELINKEDLIST_HPP
