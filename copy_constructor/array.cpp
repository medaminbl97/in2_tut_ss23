//
// Created by Mohamed Amine  Bellil on 10.05.23.
//

#include "array.h"


array::array(int capacity) : capacity(capacity), size(0),values(new int[capacity]){
    for (int i = 0; i < capacity; ++i) {
        //*(values+i) = 0; alternative
        values[i] = 0;
    }
}

int array::getSize() const {
    return size;
}

int array::getCapacity() const {
    return capacity;
}

void array::setCapacity(int capacity) {
    this->capacity = capacity;
    int * temp_values = new int[capacity]; // neuer speicherplatz

    for (int i = 0; i < size; ++i) {
        temp_values[i] = values[i]; // elemente kopieren
    }

    delete [] values ; // alte speicherplatz deallozieren
    values = temp_values;

}

void array::push(int new_val) {
    if(size < capacity){
        values[size]= new_val;
        size++;
    }else std::cout << "Array is full" << std::endl;
}

void array::operator<<(int new_val) {
    push(new_val);
}

std::ostream& operator << (std::ostream& out, const array& obj){
    out << "Printing Array: \n";
    for (int i = 0; i < obj.capacity; ++i) {
        out << "[" << i << "] = " << obj[i] << std::endl;
    }
    return out;
}

int array::operator[](int index) const {
    return values[index];
}

int* array::getAdress() const {
    return values;
}

array::array(const array &other) : size (other.size), capacity(other.capacity),values(new int[capacity]){
    for (int i = 0; i < size; ++i) {
        values[i] = other[i];
    }
}

array array::operator=(const array &other){
    size = other.size;
    capacity = other.capacity;

    delete [] values;
    values = new int[capacity];

    for (int i = 0; i < size; ++i) {
        values[i] = other[i];
    }
}

array::~array() {
    delete values;
}

