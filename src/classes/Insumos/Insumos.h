#pragma once
#include <iostream>
#include <string>

class Insumo {

  // Atributos
  protected:
    std::string nome;
    std::string dataVencimento;
    std::string nomeFabricante;
    double valorUnitario;
    int quantidadeItem;

  // Metodos
  public:
    Insumo();

    // SET Methods
    void setNome(std::string);
    void setDataVencimento(std::string);
    void setNomeFabricante(std::string);
    void setValorUnitario(double);
    void setQuantidade(int);

    // GET Methods
    std::string getDescricao();
    void getNome();
};