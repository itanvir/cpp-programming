/* Compilation requires -I directory for xtensor:
cd "/Users/itanvir/work/cpp-programming/" && g++ -I/Users/itanvir/work/cpp-programming/xtensor xtensor_reshape.cpp -o xtensor_reshape && "/Users/itanvir/work/cpp-programming/"xtensor_reshape
*/

#include <iostream>
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"

int main(int argc, char *argv[])
{
  xt::xarray<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "Array = " << arr << std::endl;

  arr.reshape({3, 3});

  std::cout << "Reshaped array = " << arr << std::endl;

  for (int i=0; i < 3; i++)
  {
    for (int j=0; j < 3; j++)
    {
      std::cout << "i, j, value = " << i << " " << j << " " << arr(i, j) << std::endl;
    }
  }

  return 0;
}