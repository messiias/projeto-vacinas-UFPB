#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "../Insumos/Insumos.h"

class Local {
  private:
    std::vector<std::string> localNome;
    int tipo;
    std::vector< Insumo* > locais;

  public:
    Local();

    // SET Methods
    void setNomeEstado(std::string);
    void setInsumoParaLocal();

    // GET Methods
    std::string getNomeEstado();
    int getTipo();
};