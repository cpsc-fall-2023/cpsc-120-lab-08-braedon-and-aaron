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
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  float sum_num = 0;

  for (std::string& argument : arguments) {
    if (argument != "./average") {
      float test = std::stof(argument);
      sum_num = sum_num + test;
    }
  }
  float average = sum_num / static_cast<float>(arguments.size() - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
