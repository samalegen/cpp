#include <iostream>

int main() {

    std::cout << "year\t" << "Cleo\t" << "Dafna\n" << std::endl; 

    double balans_cleo = 100, balans_dafna = 100;
    std::cout <<"1\t" << balans_cleo << '\t' << balans_dafna << '\t' << std::endl;

    while (balans_cleo != balans_dafna) {
        int year = 1;
        double balans_cleo_new = balans_cleo;
        balans_cleo = balans_cleo_new * 0,05;
        std::cout << year << '\t' << 

    }

    return 0;

}
