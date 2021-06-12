#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "../Insumos/Insumos.h"

class Local {
  private:
    std::string localNome;
    int tipo;
    std::vector< Insumo* > insumosDoLocal;

  public:
    Local();

    // SET Methods
    void setNomeEstado(std::string);
    void setInsumoParaLocal(Insumo*);

    // GET Methods
    std::string getNomeEstado();
    std::vector < std::string > getInsumosNome();
    std::vector < Insumo* > getInsumos();
};