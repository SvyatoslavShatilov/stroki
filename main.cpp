#include <iostream>
/*
int main() {
  std::cout << "What is your name? Enter a name: \n";
  std::string name;
  std::cin >> name;
  std::cout << "What race are you? Choose a race: \n";
  std::string species;
  std::cin >> species;
  std::cout << "Родился новый " << species << ", его зовут " << name << ".\n" <<
"Добро пожаловать в суровый мир!\n";
}*/
int main() {
  std::cout << "Введите логин: \n";
  std::string name;
  std::cin >> name;
  std::cout << "[" << name << "]\n"
            << "\nВведите пароль: \n";
  std::string passvod;
  std::cin >> passvod;
  std::cout << "[" << passvod << "]\n"
            << "\nВы успешно вошли в систему!\n";
}