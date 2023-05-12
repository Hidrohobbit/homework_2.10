#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "Здравствуйте," << name << "!";
    system("pause");
    return 0;
}

