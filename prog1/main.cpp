#include <iostream>



class person{
private:
    char * name;
    int age;
public:
    person() : name("no_name") , age(0){
        std::cout << "person default contructor called " << std::endl;
        } // default constructor
    person(char * name1, int age1) : name(name1), age(age1) { // constructor
        std::cout << "person contructor called " << std::endl;
    }

    // alternative konstruktor mit default paramatern
    //person(char * name1 = "no_name" , int age1 = 0){
    //    name = name1;
    //    age = age1;
    //}
    void print(){
        std::cout << name << " " << age << std::endl;
    }

    void setAge(int new_age){age = new_age ;}
    void setName(char * new_name){name = new_name ;}
    char * getName(){return name;}
    int getAge(){return age;}
};

class uni {
    person student;
public:
    uni(person student1) : student(student1) { } // intialsierer liste
};

class str {
public:
    char letters[28];
public:
    str(char * string){
        for (int i = 0; i < strlen(string) ;i++) {
            letters[i] = string[i];
        }
        letters[strlen(string) + 1] = '\0';

    }
    void print(){
        std::cout << letters;
    }
    char operator [](int index){ return letters[index];}
    str operator + (str other_name){ }
};



std::ostream& operator << (std::ostream& stream, str obj){ // ausgabe operator überladen
    stream << obj.letters;

    return stream;
}


class punkt{
public:
    int x,y;
    punkt(int x, int y) : x(x),y(y){}
};

std::ostream& operator << (std::ostream& out, punkt obj){
    out << "Das ist ein Punkt: " << '(' << obj.x << ',' << obj.y << ')' << std::endl;
    return out;
}


int main() {
    /*person p1("mohamed",100);
    uni oth(p1);*/
    str name1("monta");
    str name2("amin");
    str name3(name1 + name2);








    return 0;
}
