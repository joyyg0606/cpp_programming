#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country>countries;
};

int main() {

    Tours tours 
        {"Tour Ticket Prices from Miami", 
            {
                {
                    "Colombia", {
                        {"Bogota", 9993281, 400.98},
                        {"Cali", 28591299, 412.12},
                        {"Medellin", 1293872, 495.14},
                        {"Cartagena", 928547, 213.59}
                    },
                },
                {
                    "Brazil", {
                        {"Rio de janiero", 29385893, 129.45},
                        {"Sao Paulo", 128948500, 298.23},
                        {"Salvador", 10283849, 944.99}
                    },
                },
                {
                    "Chile", {
                        {"Valdivia", 2099900, 959.34},
                        {"Santiago", 2930000, 129.64}
                    },
                },
                    {"Argentina", {
                        {"Beunos Aires", 30192000, 799.23}
                    }
                },
            }
        };

    std::cout << tours.title << std::endl;
    for(auto country : tours.countries) {
        std::cout << country.name << std::endl;
        for(auto city:country.cities) {
            std::cout << "\t" << city.name << "\t" << city.population << "\t" << city.cost << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;

}