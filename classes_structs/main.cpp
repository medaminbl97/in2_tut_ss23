#include <iostream>
/*
struct person {
    char * name;
    int age;
    char * stg;
    int gdatum;
};
*/
class person {
private:
    char * name;  // member
    int age; // member
public:

    person(char * in_name , int in_age ){ // constructor
        name = in_name;
        age = in_age;
    }

    person(){ // default conctructor
        name = "no_name";
        age = 0;
    }

    /* person(char * in_name  = "no_name" , int in_age = 0){ // constructor with deafault param
        name = in_name;
        age = in_age;
    } */


    void print() const { // methode
        std::cout << name << " " << age << std::endl;
    }

    char * getName() const { return name;} // getter function
    void setName(char * new_name){ // setter function
        name = new_name;
    }

    int getAge() const { return age;}
    void setAge(int new_age){
        age = new_age;
    }
};




void increment(int * var){
    (*var)++;
}

void increment2(int& var){
    var++;
}

void add(int& dst, int op1, int op2){
    dst = op1 + op2;
}

void add(double& dst, double op1, double op2){
    dst = op1 + op2;
}

void func(const person obj){
    obj.print();
}




int main() {
   /*int a = 30;
   increment(&a); // pass per pointer
   increment2(a); // pass per referenz
   std::cout << a;*/

   /*int a = 30;
   int b = 50;
   int c = 0;
   add(c,a,b);
   std::cout << c;

   double a1 = 4.13;
   double b1 = 2.13;
   double c1 = 0.0;
   add(a1,b1,c1);*/

   /*person p1("amin",90);
   person p2("aziz",33);
   person p3("hech",11);
   person p4;

   std::cout << p1.getName()  << std::endl;
   p1.setName("amin2");
   std::cout << p1.getName() << std::endl;

   std::cout << p3.getName() << std::endl;
   p3.setName("hechmi");
   std::cout << p3.getName() << std::endl;*/

   /*person personen[10];  geht nur mit default constructor

    for (int i = 0; i < 10; ++i) {
        personen[i].print();
    }

    personen[4].setName("hech");
    personen[4].setAge(40);

    for (int i = 0; i < 10; ++i) {
        personen[i].print();
    }*/

    person amin("amin",39);
    func(amin);





    return 0;
}
