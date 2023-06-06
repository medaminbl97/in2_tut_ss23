#include <iostream>


class array {
    int values[10];
    int size;
public:
    array() : size(10) {
        for (int i = 0; i < 10; i++)
            values[i] = 0;
    }

    void fill(int index, int value) {
        if (index > 9) throw "out of range";
        else values[index] = value;
    }

    int getSize() const { return size; };

};

int main() {

    array a1;
    try{
        a1.fill(20,500);

    }catch(const char * msg)
    {
        std::cout << "in catch block";
        int i = a1.getSize();
        a1.fill(i-1,500);
    }

    return 0;
}
