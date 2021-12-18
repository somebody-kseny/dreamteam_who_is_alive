// AntivirusConsol.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>

#include "information.h"

int main()
{   
    std::cout << "Enter the path to the file or folder\n" << "if it dir write firstly 'dir' else 'file'\n" << "or 'exit' to exit of program" << std::endl;
    while (true) {
        std::string stroka_is_consoli;   
        std::getline(std::cin, stroka_is_consoli);
        std::cout << stroka_is_consoli << std::endl;
        if (stroka_is_consoli == "exit") {
            return 0;
        }

        information first { stroka_is_consoli };

        
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
