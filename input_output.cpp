// Read name and age
  
#include <iostream>
  
int main() // C++ programs start by executing the function main 
{ 
    std::cout<<"Please enter your first name and age\n";
    std::string first_name = "???";
    int age = 0;
    std::cin>>first_name;
    std::cin>>age;
    std::cout<<"Hello " << first_name << "| age = " << age << "!\n";
    return 0;
} 