#ifndef INSUMO_H_
#define INSUMO_H_

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
    virtual std::string getDescricao();
};

#endif /* INSUMO_H_ */