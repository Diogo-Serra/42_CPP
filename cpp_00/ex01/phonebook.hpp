
#include <iostream>
#include <cstdlib>
#include <unistd.h>

class PhoneBook {
    public:
        PhoneBook(int i);
        // PhoneBook(std::string n);
        std::string getname();
        int id;
    private:
        std::string name;
};

std::ostream& operator<<(std::ostream& os, PhoneBook& phonebook);

void show_args(char** argv);
