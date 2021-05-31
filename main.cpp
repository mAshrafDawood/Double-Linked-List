//
// Created by M. Ashraf on 5/25/2021.
//

#include <iostream>
#include "DoubleLinkedList.hpp"
#include "Stack.hpp"
#include "Queue.hpp"


int main() {
    Queue<int> Q;
    Q.push(10);
    Q.push(11);
    Q.push(12);

    std :: cout << Q.next() << std :: endl;

    for (int i = 0 ; i < 3; i++) std :: cout << Q.pop() << " ";
//    DoubleLinkedList<int> list;
//    while (true){
//        std::cout << "WELCOME TO MY LINKED LIST" << std::endl;
//        std::cout << "-------------------------" << std::endl;
//        int choice;
//        std::cout << "Choose which operation to make" << std::endl;
//        std::cout << "1.Add element to the start of the list\n2.Add element to the end of the list\n3.Add Element in the middle\n4.Print the list\n5.Remove an element\n8.Exit\n->";
//        std::cin >> choice;
//        if (choice == 1){
//            int element;
//            std::cout << "Enter the element you would like to add -> ";
//            std::cin >> element;
//            list.addFirst(element);
//        }
//        else if (choice == 2){
//            int element;
//            std::cout << "Enter the element you would like to add -> ";
//            std::cin >> element;
//            list.addLast(element);
//        }
//        else if (choice == 3){
//            int element, pos;
//            std::cout << "Enter the element you would like to add -> ";
//            std::cin >> element;
//            std::cout << "Enter the position you owuld like to add to ->";
//            std::cin >> pos;
//            list.insert(element, pos);
//        }
//        else if (choice == 4){
//            list.printList(); std::cout << std::endl;
//        }
//        else if (choice == 5){
//            int pos;
//            std::cout << "Enter the position you would like to remove from ->";
//            std::cin >> pos;
//            list.delElement(pos);
//        }
//        if (choice == 8) break;
//    }
    return 0;
}
