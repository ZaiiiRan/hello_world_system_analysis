#include <iostream>

int main()
{
  // спрашиваем имя пользователя
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;

  // выводим персональное приветственное сообщение
  std::cout << "\nHello world from " << name << std::endl;
  return 0;
}