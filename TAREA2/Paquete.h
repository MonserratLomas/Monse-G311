#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoPorKg;

public:
    Paquete(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
            const std::string& rEst, const std::string& rCP,
            const std::string& dNom, const std::string& dDir, const std::string& dCiu,
            const std::string& dEst, const std::string& dCP,
            double costoEstandar,
            double largo, double ancho, double profundidad,
            double peso, double costoPorKg);

    double calculaCosto() const override;
};

#endif

