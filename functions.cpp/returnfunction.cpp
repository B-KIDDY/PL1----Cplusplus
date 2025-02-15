#include <iostream>

// Function to check if age is 18 or over
bool isAdult(int age) {                                                    //bool is the datatype and bool is also the return keyword
    if (age >= 18) {
        return true;
    } 
    else {
        return false;
    }
}

int main() {
    int age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (isAdult(age)) {
        std::cout << "You are an adult" << std::endl;
    } 
   else {
        std::cout << "You are a child" << std::endl;
    }

    return 0;
}                                                  


//Here the return keyword is the return datatype of this function  