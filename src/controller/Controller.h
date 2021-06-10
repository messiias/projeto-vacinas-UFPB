#pragma once
#include <string>
#include <vector>
#include "../models/Insumos/Insumos.h"
#include "../models/Local/Local.h"

class Controller {
  private:
    std::vector< Local > locais;
    std::vector< Insumo * > insumosMS;

  public:
    Controller();
    
    // Ministerio da saúde
    void cadastraInsumosMS(Insumo*);
    void consultaInsumosMS(int);
    // void consultaDescricaoInsumoMS(int);

    // Estados
    void distribuiInsumoParaEstado(Local*);
    void consultaInsumos(int);
    void consultaInsumosDescricao(int);

};