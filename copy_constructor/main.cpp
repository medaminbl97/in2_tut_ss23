#include <iostream>
#include "array.h"

class person{
    char * name;
    int * age;

public:
    person(char * name = "no name" ,int _age = 0):name(name),age(new int(_age)){}
    person(const person& obj){
        std::cout << "Copy constructor aufgerufen" << std::endl;
        name = obj.name;
        age = new int; // new adresse allozieren
        *age = *(obj.age); // der wert kopieren
    }

    person operator = (const person& obj){
        name = obj.name;
        *age = *(obj.age);

    }

    char * getName()const{ return name;}
    int  getAge()const{ return *age;}
    void setName(char * name){ this->name = name;}
    void setAge(int age){ *(this->age) = age;}
    void print(std::ostream& out)const{ out << "Name : " << name << "\tAge : " << *age << std::endl; }

};

std::ostream& operator << (std::ostream& out, const person& obj ){

    obj.print(out);
    return out;
}




int main() {
    /*person p1("Anis",100);
    person p2 = p1; // copy constructor

    person p3; // default constructor
    p3 = p1; // zuweisungsoperator

    p2.setAge(44);
    std::cout << p1;
    std::cout << p2; // keine flachkopie --> tiefkopie

    p3.setAge(800);
    std::cout << p1 ;
    std::cout << p3; // flachkopie --> zuweizungsoperator muss überschrieben werden*/

    array a1;
    std::cout << a1;
    a1 << 5;
    a1 << 5;
    a1 << 5;
    std::cout << a1;

    array a2;
    a2 = a1;
    a2 << 99;

    std::cout << a1;
    std::cout << a2;







    return 0;
}
