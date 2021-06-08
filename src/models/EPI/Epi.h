#pragma once
#include <string>
#include "../Insumos/Insumos.h"

class Epi : public Insumo {
  private:
    // Atributos
    std::string tipoEpi;
    std::string infoEpi;

  public:
    // Construtor
    Epi();
};