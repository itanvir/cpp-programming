#include <iostream>
  
int main() 
{ 
    enum Days { Sunday, Monday, Tuesday,
    Wednesday, Thursday, Friday, Saturday};

    Days day; // types; like double temperature

    day = Sunday;

    std::cout << day;
    std::cout << std::endl;

    if (day == Saturday || day == Sunday)
        std::cout << "It's weekend!\n";

    return 0; 
} 