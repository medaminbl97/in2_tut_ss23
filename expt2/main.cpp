#include <iostream>
#include <vector>


class myexcept : std::exception{
    char * message;
public:
    myexcept(char * msg):std::exception(), message(msg){}
    const char * what() const throw() {
        return message;
    };
};


void func(){
    throw myexcept("error 1 monta");
}



int main() {
    std::vector<int> arr(10);
    arr.reserve(10);

    try{
        arr.at(50) = 500;
    }catch(const std::out_of_range& out){
        arr.resize(50+1);
        arr.at(50) = 500;
    }

    std::cout << arr.at(50);
    std::cout << arr.size();

    try{
        func();
    }catch (const myexcept& obj){
        std::cout << obj.what();
    }



    return 0;
}
