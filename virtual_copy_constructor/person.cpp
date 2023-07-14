//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#include "person.h"

person::person(const std::string &name) : name(name){

}

void person::print(std::ostream &out) const {
    out << "Name : " << name << std::endl;
}

void person::setName(const std::string &n_name) {
    name = n_name;
}


std::ostream& operator << (std::ostream& out, const person & obj) {
    obj.print(out);
    return out;
}

student::student(const std::string &name, const std::string &stg) : person(name),stg(stg){

}

void student::print(std::ostream &out) const {
    out << "Name : " << name << "\t Stg : " << stg << std::endl;
}

doc::doc(const std::string &name ) : person(name),title("Doc."){

}

void doc::print(std::ostream &out) const {
    out << "Name : " << name << "\t Title : " << title << std::endl;
}
