#include <iostream>

int main()
{
    srand(time(NULL));                     //here we use the srand() function

    int num1 = (rand() % 6) + 1;                                //here we want a random number within 1 to 6 
    int num2 = (rand() % 44) + 1;                                ////here we want a random number within 1 to 44
    int num3 = (rand() % 100) + 1;                               ///here we want a random number within 1 to 100

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}                              










//The srand() function in C++ seeds the pseudo-random number generator used by the rand() function. It is defined in the cstdlib header file.