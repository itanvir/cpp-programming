#include <iostream>

int main()
{
    int someArray[2][5] = {{0, 1, 2, 3, 4},
                           {0, 2, 4, 6, 8}}; //Array of 2x5 dimension integers
    int i;
    int j;

    for (i = 0; i < 2; i++) // 0 to 2
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << i << " " << someArray[i][j] << "\n";
        }
    }

    return 0;
}