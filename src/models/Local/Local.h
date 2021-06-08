#pragma once
#include <string>
#include <iostream>
#include "../Insumos/Insumos.h"

class Local {
  private:
    std::string localNome;
    int tipo;
    Insumo *insumo[100];
  
  public:
    Local();
    
};