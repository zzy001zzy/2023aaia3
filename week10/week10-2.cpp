#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    void print(){
        cout<<"I am a cat. My name is "<<name<<".\n";
    }
};
int main(){
    Cat cat1,cat2;
    cat1.name="�p��";
    cat2.name="�p��";
    cat1.print();
    cat2.print();
}
