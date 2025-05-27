#include "Paquete.h"

Paquete::Paquete(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
                 const std::string& rEst, const std::string& rCP,
                 const std::string& dNom, const std::string& dDir, const std::string& dCiu,
                 const std::string& dEst, const std::string& dCP,
                 double costoEstandar,
                 double largo, double ancho, double profundidad,
                 double peso, double costoPorKg)
    : Envio(rNom, rDir, rCiu, rEst, rCP, dNom, dDir, dCiu, dEst, dCP, costoEstandar),
      largo(largo), ancho(ancho), profundidad(profundidad),
      peso((peso > 0) ? peso : 0), costoPorKg((costoPorKg > 0) ? costoPorKg : 0) {}

double Paquete::calculaCosto() const {
    return costoEstandar + (peso * costoPorKg);
}

