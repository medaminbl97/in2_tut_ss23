//
// Created by Mohamed Amine  Bellil on 14.07.23.
//

#ifndef VIRTUAL_COPY_CONSTRUCTOR_PERSON_H
#define VIRTUAL_COPY_CONSTRUCTOR_PERSON_H

#include <iostream>


enum type {P,S,D};
class person {
protected:
    std::string name;
public:
    person(const std::string& name);
    virtual void print(std::ostream& out) const;
    void setName(const std::string& n_name);
    virtual type getType() const { return P;}

};

class student : public  person{
    std::string stg;
public:
    student(const std::string& name , const std::string& stg);
    void print(std::ostream& out) const;
    type getType()const{ return S;}
};


class doc : public  person{
    std::string title;
public:
    doc(const std::string& name);
    void print(std::ostream& out) const;
    type getType()const{ return D;}

};


std::ostream& operator << (std::ostream& out, const person & obj);


#endif //VIRTUAL_COPY_CONSTRUCTOR_PERSON_H
