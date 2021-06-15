#include <iostream>
#include <vector>
#include "Controller.h"
#include "../models/Local/Local.h"
#include "../models/Insumos/Insumos.h"
#include "../models/Medicamentos/Medicamentos.h"
#include "../models/Vacina/Vacina.h"
#include "../models/EPI/Epi.h"

Controller::Controller(){

  std::string arrayEstados[] = {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"
  };
  
  for(int i = 0; i < 27; i++) {
    Local *novoEstado = new Local();
    novoEstado->setNomeEstado(arrayEstados[i]);

    this->locais.push_back(novoEstado);
  }
}


// MINISTERIO DA SAUDE

// METODO DE CADASTRO DE INSUMOS
void Controller::cadastraInsumosMS(Insumo *novoElemento){
  this->insumosMS.push_back(novoElemento);
}

// METODO DE CONSULTA DOS INSUMOS DO MINISTERIO DA SAUDE
void Controller::consultaInsumosMS(int userValue){
  switch (userValue) {
    case 1:
      for(auto elem: this->insumosMS) std::cout << elem->getDescricao() << std::endl;
      break;
    case 2:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 1) std::cout << elem->getDescricao() << std::endl;
      }
      break;
    case 3:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 2) std::cout << elem->getDescricao() << std::endl;
      }
      break;
    case 4:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 3) std::cout << elem->getDescricao() << std::endl;
      }
      break;
  }
}

// ESTADOS

// METODO PARA DISTRIBUICAO DE INSUMOS PARA ESTADOS
void Controller::distribuiInsumoParaEstado(std::string estado, std::string insumo, int quantidade) {
  bool estadoEncontrado = false, insumoEncontrado = false, insumoExisteEstado = false;
  int quantidadeAtualInsumo = 0, cont = 0;

  for(auto elem: this->insumosMS) {
    if(elem->getNome() == insumo) {
      insumoEncontrado = true;
      quantidadeAtualInsumo = elem->getQuantidade();
      break;
    }
  }

  if(!insumoEncontrado) {
    std::cout << "Insumo não encontrado\n\n";
    return;
  } else if(quantidade > quantidadeAtualInsumo){
    std::cout << "Quantidade maior do que o insumo possui.\n\n";
    return;
  }

  // 
  for(auto elem: this->locais) {
    if(elem->getNomeEstado() == estado) {

      std::vector < Insumo* > auxVector = elem->getInsumos();
      for(auto aux: auxVector) {
        if(aux->getNome() == insumo) {
          int auxQuantidade = aux->getQuantidade();
          aux->setQuantidadeItem(auxQuantidade + quantidade);

          //Atualiza MS
          for(auto auxMS: this->insumosMS){
            if(auxMS->getNome() == insumo) {
              int auxQuantidadeMS = auxMS->getQuantidade();
              auxMS->setQuantidadeItem(auxQuantidadeMS - quantidade);
            }
          }

          insumoExisteEstado = true;
          break;
        }
      }

      if(!insumoExisteEstado) {
        for(auto aux: this->insumosMS) {
          if(aux->getNome() == insumo) {
            Insumo *novoElemento = aux->clone(quantidade);
            elem->setInsumoParaLocal(novoElemento);

            break;
          }
        }
      }

      estadoEncontrado = true;

      break;
    }
  }
  
  for (auto elem: this->insumosMS){
    cont++;

    if((elem->getNome() == insumo) && (quantidadeAtualInsumo == quantidade)){
      delete(elem);

      this->insumosMS.erase(this->insumosMS.begin() + (cont - 1));
      break;
    }
  }
}


// CONSULTA INSUMOS DO ESTADO
void Controller::consultaInsumosES(std::string estado) {
  bool encontrado = false;

  for(auto elem: this->locais) {
    if(elem->getNomeEstado() == estado) {
      std::vector < std::string > auxVector = elem->getInsumosNome();
      
      // Percorre o vector de Insumos e mostra o nome de cada Insumo
      for(auto aux: auxVector) std::cout << aux << ", ";
      std::cout << std::endl;
      encontrado = true;

      break;
    }
  }

  if(!encontrado) std::cout << "Estado não encontrado\n\n";
}


// CONSULTA DAS DESCRICOES DOS ESTADO
void Controller::consultaInsumosDescricaoES(std::string estado) {
  bool encontrado = false;

  for(auto elem: this->locais) {
    if(elem->getNomeEstado() == estado) {
      std::vector < Insumo* > auxVector = elem->getInsumos();

      for(auto aux: auxVector) std::cout << aux->getDescricao() << std::endl;

      // Variável de controle para verificar se o elemento foi encontrado ou não
      encontrado = true;

      // Cancela o for uma vez que o estado desejado foi encontrado
      break;
    }
  }

  if(!encontrado) std::cout << "Estado não encontrado\n\n";
}
