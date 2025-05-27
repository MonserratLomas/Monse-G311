#ifndef ENVIO_H
#define ENVIO_H

#include <string>

class Envio {
protected:
    std::string remitenteNombre;
    std::string remitenteDireccion;
    std::string remitenteCiudad;
    std::string remitenteEstado;
    std::string remitenteCP;

    std::string destinatarioNombre;
    std::string destinatarioDireccion;
    std::string destinatarioCiudad;
    std::string destinatarioEstado;
    std::string destinatarioCP;

    double costoEstandar;

public:
    Envio(const std::string& rNom, const std::string& rDir, const std::string& rCiu,
          const std::string& rEst, const std::string& rCP,
          const std::string& dNom, const std::string& dDir, const std::string& dCiu,
          const std::string& dEst, const std::string& dCP,
          double costo);

    virtual ~Envio() = default;
    virtual double calculaCosto() const;
};

#endif
