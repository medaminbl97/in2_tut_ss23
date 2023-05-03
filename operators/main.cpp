#include <iostream>
#include <string>

using namespace std;
class punkt {
private:
    int x,y;
public:
    //punkt():x(0),y(0){ } // dfefault constructor
    //punkt(int x, int y) :x(x),y(y) {} // cnstructor
    punkt(int x = 0, int y = 0) : x(x),y(y){} // alternative zu den beiden construkotoren
    void setX(int x){ this->x = x; /* punkt::x = x; */ }
    void setY(int y){ this->y = y; /*punkt::x = x;*/ }
    int getX()const {return x;}
    int getY()const {return y;}
    void print(std::ostream& stream ) const { stream << '(' << x <<    std::showpos << y << std::noshowpos <<   "j)" ;}

    punkt operator + (const punkt& other) const { return punkt(x + other.x,y + other.y); }
    punkt operator + (int value) const { return punkt(x ,y + value); }
    punkt operator - (const punkt& other)  const { return punkt(x - other.x,y - other.y); }
    punkt operator * (const punkt& other) const { return punkt(x * other.x,y * other.y); }
    bool operator > (const punkt& other) const { if( x > other.x && y > other.y) return true ; return false;}

    punkt operator ++() { ++x; ++y;} // pre increment
    punkt operator ++(int) { return punkt(x++,y++); } // post increment


};

std::ostream& operator << (std::ostream& out, const punkt& obj){

    // wenn man kein print funktion hat dann einfach das schreiben :
    // out << '(' << obj.getX() << ',' << obj.getY() << ')'
    obj.print(out);
    return out;
}

int add(const punkt p1, const punkt p2){
    return p1.getX() + p2.getX() + p1.getY() + p2.getY();
}

void pow2(int& x){
    std::cout << "Adess of x :" << &x << std::endl;
    std::cout << "X ind pow func : " << x << std::endl;
    x = x * x;
    std::cout << "X ind pow func after mulipilcation : " << x << std::endl;
}

int main() {
    punkt p1(5,10);
    punkt p2(100,300);

    /*int x = 10;
    std::cout << ++x << std::endl;
    std::cout << x;*/



    /*std::string name = "monta";
    char * namecpy =  (char*) name.c_str(); // kessel aufgabe;
    std::cout << namecpy;
    std::string nachname = "saidiene";
    std::cout << name.size();*/

    int a = 40;
    std::cout << "Adress of a : " << &a << std::endl;
    pow2(a);
    std::cout << a;


    return 0;
}
