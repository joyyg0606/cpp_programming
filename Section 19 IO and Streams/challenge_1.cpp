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

void ruler() {
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl;
}

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

        const int total_width {70};
        const int field1_width {20};
        const int field2_width {20};
        const int field3_width {15};
        const int field4_width {15};

        ruler ();
        int title_length = tours.title.length();
        std::cout << std::setw((total_width - title_length) / 2) << "" << tours.title << std::endl;
        std::cout << std::endl;
        std::cout << std::setw(field1_width) << std::left << "Country" << std::setw(field2_width) << std::left << "City" << std::setw(field3_width) << std::right << "Population" << std::setw(field4_width) << std::right << "Price" << std::endl;

        std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;

        std::cout << std::setfill(' ');
        std::cout << std::setprecision(2) << std::fixed;

        for(Country country:tours.countries) {
            for (size_t i = 0; i < country.cities.size(); ++i) {
                std::cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name : "")
                          << std::setw(field2_width) << std::left << country.cities.at(i).name
                          << std::setw(field3_width) << std::right << country.cities.at(i).population
                          << std::setw(field4_width) << std::right << country.cities.at(i).cost
                          << std::endl; 
            }
        }

    // std::cout << tours.title << std::endl;
    // for(auto country : tours.countries) {
    //     std::cout << country.name << std::endl;
    //     for(auto city:country.cities) {
    //         std::cout << "\t" << city.name << "\t" << city.population << "\t" << city.cost << std::endl;
    //     }
    // }

    std::cout << std::endl << std::endl;
    return 0;

}