// Braedon Collett
// braedoncollett@csu.fullerton.edu
// @pythonrogrammer3
// Partners: @Aaron-12a

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (size(arguments) < 2) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  double sum_num = 0;
  for (int i = 1; i < size(arguments); i++) {
    sum_num += std::stod(arguments.at(i));
  }

  double average = sum_num / (size(arguments) - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
