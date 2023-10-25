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
    std::cout << "error\n";
    return 1;
  }

  float sum_num = 0;

  for (std::string& argument : arguments) {
    if (argument != "./average") {
      sum_num = sum_num + std::stof(argument);
    }
  }
  float average = sum_num / static_cast<float>(arguments.size() - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}
