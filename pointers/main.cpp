#include <iostream>


void func(){
    std::cout << "hello wordl" << std::endl;
}
int func1(){
    return 1;
}

void increment1(int x){ // pass per value or copy
    x++;
}
void increment2(int *x){ // pass per pointer or adress
    (*x)++;
}
void increment3(int& x){ // pass per referenz
    x++;
}

void add(int& dst, int x,int y){
    dst = x + y;
}

void add(float& dst, float x,float y){
    dst  =  x * y;
    std::cout << "hello";
}
int add1( int x,int y){
    x + y;
}

void plus_moin_combinaison(int& plus_dst, int& moin_dst , int x, int y){
    plus_dst = x +y;
    moin_dst = x - y;
}


int main() {
    /*int * ptr = new int;
    int  i = 22;
    std::cout << &ptr << "\t" << ptr <<   "\t" << &i << std::endl;
    std::cout << "Adresse des Pointers : " << &ptr << std::endl;
    std::cout << "Wert des Pointers ptr = adresse des allozierten Speicherplatzes : " << ptr << std::endl;
    std::cout << "der Wert in der Adresse ptr : " << *ptr << std::endl;
    std::cout << "Adresse von i : " << &i << std::endl;*/
    /*int *  preis = nullptr;
    char c = 'n';

    std::cout << "geben sie bitte den Preis \n";
    std::cin >> c;

    if(c == 'n') return 0;
    else {
        preis = new int[10];
        *preis = 1000;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << "Adresse : " << preis+i << " value : " << * (preis+i) << std::endl;
    }
    */

    /*int ** ptr = new int*;
    *ptr = new int;
    std::cout << **ptr;*/

   /* char * name = "monti"; // in read only memory --> unmutable
    name[0] = 't'; //kann man nicht machen
    name = "montaa"; //kann man machen

    char name1[] = "monti2"; // in stack --> mutable
    name1[0] = 't'; //kann man machen
    //name1 = "montaa"; //kann man nicht machen

    char * names[2]  = {"amin","aziz"}; // char * name1 ; char * name 2;
    names[0] = "monta"; // char *
    names[1] = "monti"; // char *

    char ** other_names = nullptr;
    other_names = new char*[20] ; // new strings
    *other_names = "monta"; // first string
    *(other_names +1) = "aziz";
    *(other_names +2) = "aziz";
    *(other_names +3) = "aziz"; */

    /*int a ;

    std::cout << a << std::endl;
    a = func1(); // fonction
    std::cout << a << std::endl;
    func(); // procedure ( void type fuction) */

    /*int x = 30;
    increment1(x);
    std::cout << x << std::endl;
    increment2(&x);
    std::cout << x<< std::endl;
    increment3(x);
    std::cout << x << std::endl;*/
    int dst = 0;
    float fdst = 0;

// Funktion Überladen --> gleicher Name, verschiedner Paramnetern
    add(dst,40,22);// procdeure int
    add(fdst,33.11,1.24);// procdeure float
    dst = add1(44,11); // function
    //std::cout << dst;

    int dst_p, dst_m;
    plus_moin_combinaison(dst_p,dst_m,88,100);
    std::cout << dst_p << "\t" << dst_m << std::endl;






    return 0;
}
