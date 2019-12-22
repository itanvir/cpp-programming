#include <iostream>

int addition(int first, int second)
{
    int result;
    result = first + second;
    return result;
}

  
int main() 
{ 
    using namespace std;
    int result;
    result = addition(4, 3);
    cout << "result" << result;
    cout << endl;
    return 0; 
} 