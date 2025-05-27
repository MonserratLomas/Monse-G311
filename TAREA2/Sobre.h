#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre : public Envio {
private:
    double largo;
    double ancho;
    double cargoAdicional;

public:
    Sobre(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
          const std::string& rEst, const std::string& rCP,
          const std::string& dNom, const std::string& dDir, const std::string& dCiu,
          const std::string& dEst, const std::string& dCP,
          double costoEstandar,
          double largo, double ancho, double cargoAdicional);

    double calculaCosto() const override;
};

#endif
