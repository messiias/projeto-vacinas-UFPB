#pragma once
#include <string>
#include "../Insumos/Insumos.h"

class Epi : public Insumo {
  private:
    std::string tipoEpi;
    std::string infoEpi;

  public:
    Epi();

    // SET Methods
    void setTipoEpi(std::string);
    void setInfoEpi(std::string);

    // GET Methods
    std::string getDescricao();
    int getTipoInsumo();

    // Clone Method
    Insumo* clone(int);
};