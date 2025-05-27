#include "Sobre.h"

Sobre::Sobre(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
             const std::string& rEst, const std::string& rCP,
             const std::string& dNom, const std::string& dDir, const std::string& dCiu,
             const std::string& dEst, const std::string& dCP,
             double costoEstandar,
             double largo, double ancho, double cargoAdicional)
    : Envio(rNom, rDir, rCiu, rEst, rCP, dNom, dDir, dCiu, dEst, dCP, costoEstandar),
      largo(largo), ancho(ancho), cargoAdicional(cargoAdicional) {}

double Sobre::calculaCosto() const {
    if (largo > 25 || ancho > 30) {
        return costoEstandar + cargoAdicional;
    }
    return costoEstandar;
}
