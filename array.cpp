#include <iostream>
  
int main() 
{ 
    int my_array[10]; //Array of 5 dimension integers
    int i;

    for  (i = 0; i<10; i++) // 0 to 9
    {
        my_array[i] = i+10;
        std::cout << i << " " << my_array[i] << "\n";
    }
        
    return 0; 
} 