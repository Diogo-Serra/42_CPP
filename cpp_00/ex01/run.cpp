
#include "phonebook.hpp"

void show_args(char** argv) {
    
    std::cout << argv[1] << std::endl;
    sleep(2);
    system("clear");
    while (true)
    {    int i = 0;
        PhoneBook b(20);
        std::cout << "1 if you like dick" << std::endl;
        std::cout << "2 if you like pussy" << std::endl;
        std::cout << "3 lgbt community" << std::endl;
        std::cout << b << std::endl;

        std::cin >> i;
        if (i == 1)
            std::cout << "gay" << std::endl;
        else if (i == 2)
            std::cout << "good boy" << std::endl;
        else if (i == 3)
            std::cout << "stfu" << std::endl;
        else
            break;
    }
    std::cout << "finished simulation" << std::endl;
}