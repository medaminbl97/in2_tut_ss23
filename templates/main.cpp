#include <iostream>
#include "container.h"
#include <vector>
#include <initializer_list>


template<typename T>
void print(T a){
    std::cout << a << std::endl;
}

class myclass{
    int a;
public:
    myclass(int a = 0) : a(a){}

    friend std::ostream& operator << (std::ostream& out, const myclass& obj){ // friend funktionen haben den zugriff aud private klassenmemeber
        out << obj.a;
        return out;
        }
};


void print_adresses(const std::vector<int>& v){
    /*for (int i = 0; i < v.size(); ++i) {
        std::cout << "Adress : " << &v[i] << "\tValue : " << v[i] << std::endl;
    }*/
    if(!v.empty()){
        for(auto& var : v) // alternative zur normalen for loop
            std::cout << "Adress : " << &var << "\tValue : " << var << std::endl;
    }else std::cout << "empty"<< std::endl;

}

class cl {
    std::vector<float *> values;
public:
    cl(){};
    ~cl(){ for(auto& v : values) delete v; values.clear(); delete p;} // sehr wichtig

};



int main() {
    /*int b = 50;
    float f = 50.04;
    myclass c(77);
    std::string s("monta");
    print(b);
    print(f);
    print(s);
    print(c);*/
    /*container<std::string> c(2);
    c.print();*/

    /*std::vector<int> v;
    print_adresses(v);
    v.reserve(4);
    v.push_back(22);
    v.push_back(22);
    print_adresses(v);
    v.push_back(22);
    v.push_back(22);
    std::cout << std::endl;
    print_adresses(v);
    v.push_back(22);
    std::cout << std::endl;
    print_adresses(v);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    print_adresses(v);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    v.push_back(22);
    print_adresses(v);*/
    std::vector<int*> v1;
    v1.reserve(4);
    v1.push_back(new int(99));
    v1.push_back(new int(88));
    v1.push_back(new int(33));

    std::cout << v1.size() << std::endl;
    for(auto& var : v1)
        delete var;
    int * ptr = v1[0];
    v1.clear();
    std::cout << v1.size() << std::endl;
    std::cout << *ptr;








    return 0;
}
