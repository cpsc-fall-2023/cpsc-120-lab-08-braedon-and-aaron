// Braedon Collett
// braedoncollett@csu.fullerton.edu
// @pythonrogrammer3
// Partners: @Aaron-12a

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (size(arguments) < 1) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  double sum_num = 0;

  for (std::string const & argument: arguments) {
    if (argument != "./average") {
      sum_num += std::stod(argument);
    }
  }

  double average = sum_num / static_cast<double>(size(arguments) - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
