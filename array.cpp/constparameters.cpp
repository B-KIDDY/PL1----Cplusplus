#include <iostream>
void printInfo(const std::string &name, const int &age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references
 
    std::string name = "Bhagath";
    int age = 18;
 
    printInfo(name, age);
 
    return 0;
}
void printInfo(const std::string &name, const int &age){
    //name = "";
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}