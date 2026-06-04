
#include <iostream>


int main(int argc, char** argv) {

    (void)argc;
    if (argc == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
    for (int i = 1; argv[i]; i++)
    {
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return 0;
}
