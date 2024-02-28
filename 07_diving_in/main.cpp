#include <iostream>

void exercise();

int main() {
  std::cout << "Number1" << std::endl;
  std::cout << "Number2" << std::endl;
  std::cout << "Number3" << std::endl;

  // Compile Error
  // std::cout << "Number3" << std::endl

  // Warning
  // 7/0;

  // Runtime Error
  // auto x = 7/0;

  std::string name;
  std::cout << "Please enter your name: " << std::endl;
  std::cin >> name;
  std::cout << "Hello " << name << std::endl;

  exercise();

  return 0;
}

void exercise() {
  std::cout << "I am the phoenix king!";
}