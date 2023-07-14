#include <iostream>

#include "person.h"
#include "Uni.h"
class ints {
    std::vector<int*> values;
public:
    ints();
    ints(const ints& other): values(){
        values.reserve(other.values.size());
        for (int i = 0; i < values.size(); ++i) {
            values[i] = new int(*other.values[i]);
        }
    }
};






int main() {
   Uni oth(5);
   oth.add(new student("Ämin","REE"));
   oth.add(new student("Brahim","ISE"));
   oth.add(new doc("Yassine"));
   oth.add(new person("Selim"));
   oth.add(new doc("Monta"));

   Uni tur(oth);
   oth.print_all();
   std::cout << std::endl;
   tur.print_all();

    std::cout << std::endl;
    std::cout << std::endl;


   oth[1].setName("Barhoum");

   oth.print_all();
    std::cout << std::endl;
   tur.print_all();
    return 0;
}
