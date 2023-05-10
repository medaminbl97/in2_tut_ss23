//
// Created by Mohamed Amine  Bellil on 10.05.23.
//

#ifndef COPY_CONSTRUCTOR_ARRAY_H
#define COPY_CONSTRUCTOR_ARRAY_H

#include <iostream>
class array {
    int * values;
    int size;
    int capacity;
public:
    array(int capacity = 10);
    ~array();
    array(const array& other);
    array operator = (const array& other); // zuweisungsoperator
    int * getAdress()const;
    int getSize()const;
    int getCapacity()const;
    void setCapacity(int capacity);
    void operator << (int new_val);
    int operator [](int index)const;
    friend std::ostream& operator << (std::ostream& out, const array& obj);
private:
    void push(int new_val);
};


#endif //COPY_CONSTRUCTOR_ARRAY_H
