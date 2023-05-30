#include <iostream>
#include "Shape.h"
#include <vector>

void func(Shape& obj){
    obj.print();
}




int main() {
    //Shape s("Shape"); // abstrakte kalsse kann nicht instanziert werden
    circle c("Circle",20);
    tri t("Tri",10,10);


    Shape * cp = &c;
    Shape * tp = &t;

    Shape * new_c = new circle("C",44);
    Shape * new_t = new tri("T",55,33);

    new_c->print();
    new_t->print();


    cp->print();
    tp->print();

    Shape * shapes[3];
    shapes[0] = new circle("c",55);
    shapes[1] = new tri("t",55,44);
    shapes[2] = new rec("r",55,11);

    std::vector<Shape *> shapes2;
    shapes2.push_back(new circle("c1",22));
    shapes2.push_back(new circle());
    shapes2.push_back(new tri());
    shapes2.push_back(new rec());

    for(auto& v : shapes2)
        v->print();



    return 0;
}
