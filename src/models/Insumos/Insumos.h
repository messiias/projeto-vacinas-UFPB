#pragma once
#include <iostream>
#include <string>

class Insumo{

  // Atributos
  protected:
    std::string nome;
    int quantidadeItem;
    int valorUnitario;
    std::string dataVencimento;
    std::string nomeFabricante;
    int tipoInsumo;

  public:
    virtual void setInfo() = 0;
};