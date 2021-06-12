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
    Insumo();

    //SET Methods
    void setNome(std::string);
    void setQuantidadeItem(int);
    void setValorUnitario(int);
    void setDataVencimento(std::string);
    void setFabricante(std::string);
    void setTipoInsumo(int);

    //GET Method
    virtual std::string getDescricao();
    int getTipoInsumo();
    std::string getNome();

    // Clone Method
    virtual Insumo* clone(int);
};