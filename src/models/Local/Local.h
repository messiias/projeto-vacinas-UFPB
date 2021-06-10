#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "../Insumos/Insumos.h"

class Local {
  private:
    std::string localNome;
    int tipo;
    std::vector< Insumo * > Ins;

  public:
    Local();

    void setCadastroInsumo();
};