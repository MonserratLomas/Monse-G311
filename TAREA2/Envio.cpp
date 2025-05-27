#include "Envio.h"

Envio::Envio(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
             const std::string& rEst, const std::string& rCP,
             const std::string& dNom, const std::string& dDir, const std::string& dCiu,
             const std::string& dEst, const std::string& dCP,
             double costo)
    : remitenteNombre(rNom), remitenteDireccion(rDir), remitenteCiudad(rCiu),
      remitenteEstado(rEst), remitenteCP(rCP),
      destinatarioNombre(dNom), destinatarioDireccion(dDir), destinatarioCiudad(dCiu),
      destinatarioEstado(dEst), destinatarioCP(dCP),
      costoEstandar(costo) {}

double Envio::calculaCosto() const {
    return costoEstandar;
}
