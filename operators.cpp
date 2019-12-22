// Simple program to excercise operators
  
// Header file for input output functions 
#include <iostream>
#include <math.h>       /* sqrt */
  
int main() // C++ programs start by executing the function main 
{ 
    std::cout<<"Please enter a floating point value:\n";
    double n;
    double out1;
    double out2;
    std::cin >> n;
    out1 = n*n;
    out2 = sqrt(n);
    std::cout<<"Squared = " << out1 << "\n";
    std::cout<<"Sqrt = " << out2 << "\n";
    return 0; 
} 