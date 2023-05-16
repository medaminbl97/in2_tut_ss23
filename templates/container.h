//
// Created by Mohamed Amine  Bellil on 16.05.23.
//

#ifndef TEMPLATES_CONTAINER_H
#define TEMPLATES_CONTAINER_H
#include <iostream>


template<typename T>
class container {
    T * values;
    int size;
    int c;
public:
    container(int c = 10);
    void print()const;
};


template<typename T> container<T>::container(int c) : c(c) , size(0) , values(new T[c]){
    for (int i = 0; i < c; ++i) {
        values[i] = "0";
    }
}

template<typename T> void container<T>::print()const{
    for (int i = 0; i < c; ++i) {
        std::cout << values[i] << std::endl;
    }
}



#endif //TEMPLATES_CONTAINER_H
