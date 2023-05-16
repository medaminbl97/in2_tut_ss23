#include <iostream>
#include "shape.h"


int main() {

    shape s("Shape");
    circle c("Circle",5);
    triangle t("Triangle" ,4,3);
    std::cout << s.getAir() << std::endl;
    std::cout << c.getAir()<< std::endl;
    std::cout << t.getAir()<< std::endl;;

    s.print();
    c.print();
    t.print();

    shape * sp = &s;
    shape * cp = &c;
    shape * tp = &t;

    sp->print();
    cp->print();
    tp->print();




    return 0;
}
