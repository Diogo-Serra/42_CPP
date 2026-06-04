
#include "phonebook.hpp"

PhoneBook::PhoneBook(int i) {
    this->name = "PhoneBook";
    id = i;
}

std::string PhoneBook::getname() {
    return this->name;
}

std::ostream& operator<<(std::ostream& os, PhoneBook& phonebook){
    os << "PhoneBooks name: " << phonebook.getname() << std::endl \
    << "id: " << phonebook.id << std::endl;
    return os;
}
