#pragma once
#include <string>
#include <vector>
#include "../models/Insumos/Insumos.h"
#include "../models/Local/Local.h"

class Controller {
  private:
    std::vector< Local* > locais;
    std::vector< Insumo * > insumosMS;

  public:
    Controller();
    
    // Ministerio da saúde
    void cadastraInsumosMS(Insumo*);
    void consultaInsumosMS(int);

    // Estados
    void distribuiInsumoParaEstado(std::string, std::string, int);
    void consultaInsumosES(std::string);
    void consultaInsumosDescricaoES(std::string);

};