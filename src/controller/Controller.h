#pragma once
#include <string>
#include <vector>
#include "../Insumos/Insumos.h"
#include "../Local/Local.h"

class Controller {
  private:
    std::vector< Local > locais;

  public:
    Controller();

    void cadastraInsumosMS();
    void consultaInsumos(Local);
    void consultaInsumosDescricao(Local);
    Insumo cadastraInsumosTipo(Local, int);
    void distribuiInsumo(Local, Insumo);
};