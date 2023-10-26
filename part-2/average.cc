// Carlos Garcia
// cgarcia48@csu.fullerton.edu
// @CarlosG48
// Partners: @ricardocruz562

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0;
  for (int xx = 1; xx < argc; ++xx) {
    sum += std::stod(arguments[xx]);
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}