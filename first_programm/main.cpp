#include <iostream>
#include <string.h>

void func(char * str){
   str[0] = 'f';
}



int main() {
    /* int b = 50;
    int * a = &b;
    int * h = new int;


    std::cout << &b << std::endl;

    std::cout << &a << std::endl;
    std::cout << a << std::endl;

    std::cout << &h << std::endl;   ;
    std::cout << h << std1a 2S JK90LPßÖ´ WQ ::endl;   ;

    std::cout << h+2;
    *(h+2) = 100;   // sowas darf man nicht weil diese Adress (h+2) ist nicht alloziert und kann zu programm sturz führen

    */

    int a = 77;
    int * d = new int;
    char * c = "aziz";
    // char * ist immer ein string
    //std::cout << &a << "\n" << d << std::endl;
    //std::cout << (int*)c;   // typecasting  um die adresse der ersten buchstabe der string c zu zeigen
    /*std::cout << *(c+0);
    std::cout << *(c+2);
    std::cout << *(c+1); */
    // *c = 'g';      das geht nicht weil c ist in .rodata (read only data ) gespeichert
    c = "monta";
    char * b = c;
    b = "yassine";

    //std::cout << (int*)c << std::endl;
    //std::cout << (int*)b;
    char str[] = "hhhh";
    func(str);
    // std::cout << str;

     int arr[2] = {1,2};
     int * ptr = arr;


   char * str3 = "monta";
   
   for(int i = 0; i < 5; i++ ){
       std::cout << str3[i] << std::endl;
   }
   for(int i = 0; i < strlen(str3); i++ ){
       std::cout << str3[i] << std::endl;
   }

   for(char * c = str3; *c != 0; c++){
       std::cout << *c << std::endl;
   }

   for(char * c = str3; *c != 0; c++){
       std::cout << c << std::endl;
   }

    


    
    






    return 0;
}
