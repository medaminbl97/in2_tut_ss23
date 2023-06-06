#include <iostream>
#include <vector>

#include "shape.h"
#include "shape_container.h"


void print_classtype(shape* s){
    std::cout << s->getClassType() << std::endl;
}




int main() {

    shape s("s");
    tri t("t");
    circle c("c");
    print_classtype(&s);
    print_classtype(&t);
    print_classtype(&c);

    std::vector<shape *> shapes;
    shapes.push_back(new shape("ss"));
    shapes.push_back(new circle("cc"));
    shapes.push_back(new tri("tt"));

    for(auto& v : shapes)
        std::cout << v->getClassType() << std::endl;

    shape_container con;
    con.push(&t);
    con.push(new shape("sss"));

    con.print();

    try{
        std::cout << con[4].name;
    }catch(const std::out_of_range& out){
        con.push(new tri("tri"));
        std::cout << con[con.getSize()-1].name;
    }

    return 0;
}
