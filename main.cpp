#include <iostream>

//This is a single line comment. Comments are ignored by the compiler

/*
    Multi - line comment. 
    This type of comment can span multiple lines
*/
int main(int argc, char **argv)
{
    int age; 
    age = 20; 
    
    float height = 1.8f;

    char singleChar = 'A';
    unsigned char smallNumber = 128; 

    std::cout << "Hello world." << std::endl;

    //Check the size in bytes of some basic data types
    std::cout << "Size of char " << sizeof(char) << std::endl;
    std::cout << "Size of int " << sizeof(int) <<  std::endl;
    std::cout << "Size of unsigned int " << sizeof(unsigned int) <<  std::endl;
    std::cout << "Size of short int " << sizeof(short int) <<  std::endl;
    std::cout << "Size of float " << sizeof(float) <<  std::endl;
    std::cout << "Size of double " << sizeof(double) <<  std::endl;

    return 0;
}
