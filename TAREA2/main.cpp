#include <iostream>
#include "Paquete.h"
#include "Sobre.h"

int main() {
    Paquete paquete("Monse", "Calle A", "Ciudad A", "Estado A", "11111",
                    "Mayra", "Calle B", "Ciudad B", "Estado B", "22222",
                    10.0, 30, 20, 15, 2.5, 4.0);

    Sobre sobre("Aldo", "Calle C", "Ciudad C", "Estado C", "33333",
                "Angela", "Calle D", "Ciudad D", "Estado D", "44444",
                5.0, 26, 31, 3.0);

    std::cout << "Costo del paquete: $" << paquete.calculaCosto() << std::endl;
    std::cout << "Costo del sobre: $" << sobre.calculaCosto() << std::endl;

    return 0;
}
