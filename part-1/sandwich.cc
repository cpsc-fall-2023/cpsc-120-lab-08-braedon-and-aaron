// Aaron Villicana
// FulAaron@csu.fullerton.edu
// @Aaron-12a
// Partners: @pythonrogrammer3

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (size(arguments) != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }

  std::string carbs = arguments.at(1);
  std::string loaf = arguments.at(2);
  std::string sauce = arguments.at(3);

  std::cout << "Your order: A " << carbs << " sandwich on " << loaf << " with "
            << sauce << ".\n";

  return 0;
}
