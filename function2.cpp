// Convert degF to degC

#include <iostream>


int convert(double temperature_f)
{
    double temperature_c;
    temperature_c = ((temperature_f - 32.0) * 5.0) / 9.0;
    return temperature_c;
}
  
int main() // C++ programs start by executing the function main 
{ 
    double temperature_f; //type declaration in both main and sub-function!
    double temperature_c; //type declaration in both main and sub-function!

    temperature_f = 80.0;
    temperature_c = convert(temperature_f);
    std::cout << "Celcius = " << temperature_c << "\n";
} 