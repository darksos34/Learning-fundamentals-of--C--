#include <iostream>
#include "Person.cpp"


enum Role
{
    Role_Visitor,
    Role_Doctor,
    Role_Patient,
    Role_Nurse,
    Maximum_Role
};

int main(int argc, char **argv)
{
    std::cout << "Switch statement example" << std::endl << std::endl;

    for (int index = 0; index < Maximum_Role; ++index)
    {
        switch(index)
        {
        case Role_Doctor:
            {
                std::cout << "I am a doctor. I treat patients." << std::endl;
                break;
            }
        case Role_Nurse:
            {
                std::cout << "I am a nurse. I treat patients." << std::endl;
                break;
            }
        case Role_Patient:
            {
                std::cout << "I am a patient. I have come for treatment." << std::endl;
               
            }
        default:
            {
                std::cout << "I am just visiting." << std::endl;
            }
        }
    }

    return 0;
}