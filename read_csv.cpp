#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
  std::ifstream ip("data.csv");

  if (!ip.is_open())
    std::cout << "ERROR: File Open" << '\n';

  std::string firstname;
  std::string lastname;
  std::string age;
  std::string weight;
  double age_array[5];
  double weight_array[5];
  int i = 0;

  while (ip.good())
  {

    getline(ip, firstname, ',');
    getline(ip, lastname, ',');
    getline(ip, age, ',');
    getline(ip, weight, '\n');

    std::stringstream(age) >> age_array[i];       // string to double
    std::stringstream(weight) >> weight_array[i]; // string to double

    std::cout << "Name: " << firstname << " " << lastname << '\n';
    std::cout << "Age String: " << age << '\n';
    std::cout << "Age Array: " << age_array[i] << "\n";
    std::cout << "Weight String: " << weight << '\n';
    std::cout << "Weight Array: " << weight_array[i] << '\n';
    std::cout << "-------------------" << '\n';

    i++;
  }

  ip.close();
}