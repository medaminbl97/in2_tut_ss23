#include <iostream>
#include <vector>


class Item {

public:
    int *  value;
    int size;
    Item(int size) : size(size){
        if(size){
            value = new int[size];


        for (int i = 0; i < size; ++i) {
            //*(value+i)= size;
            value[i]= size;


        }}else value = nullptr;
    };

    ~Item(){ delete [] value; }

    Item(const Item& other) : size (other.size){
        std::cout << "Kopie"<< std::endl;
        value = new int[size];
        for (int i = 0; i < size; ++i) {
            value[i] = other.value[i];
        }
    }



    Item operator = (const Item& other){
        std::cout << "Zuweisung"<< std::endl;
        delete [] value;
        size = other.size;
        value = new int[size];

        for (int i = 0; i < size; ++i) {
            *(value+i) = other.value[i];
        }
        return *this;
    }

    int& operator [](int index) { return value[index] ; }

};

std::ostream& operator << (std::ostream& out, const Item& obj){

    out << "[";
    for (int i = 0; i < obj.size-1; ++i) {
        out << obj.value[i] << ",";
    }

    out << obj.value[obj.size-1] << "]\n";

    return out;
}






class Container {
public:
    std::vector<Item*> items;
    int * x;
    Container(int size = 0){
        items.reserve(size);
    }
    void print(std::ostream& out) const {
        for (int i = 0; i < items.size(); ++i) {
            out << items[i];
        }
    }

    Container(const Container& other){
        x = new int;
        *x = *other.x;
        items = other.items;
    }
};

std::ostream& operator << (std::ostream& out, const Container& obj){
    obj.print(out);
    return out;
}






int main() {
    Item i1(10);
    Item i2(2);

    Container c(2);

    c.items.push_back(i1);
    c.items.push_back(i2);

    Container c1(c);
    std::cout << c << c1;
    c.items[0][5] = 66;
    c.items[1][1] = 55;
    std::cout << c << c1;








    return 0;
}
