#pragma once
#include <string>
#include "../Insumos/Insumos.h"
#include "../Local/Local.h"

class Controller {
  private:
    Local locais[28];

  public:
    Controller();

    void cadastraInsumosMS();
    void consultaInsumos(Local);
    void consultaInsumosDescricao(Local);
    Insumo cadastraInsumosTipo(Local, int);
    void distribuiInsumo(Local, Insumo);
};