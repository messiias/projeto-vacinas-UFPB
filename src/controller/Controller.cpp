#include <iostream>
#include <vector>
#include "Controller.h"
#include "../models/Local/Local.h"
#include "../models/Insumos/Insumos.h"
#include "../models/Medicamentos/Medicamentos.h"
#include "../models/Vacina/Vacina.h"
#include "../models/EPI/Epi.h"

using namespace std;

Controller::Controller(){

  std::string arrayEstados[] = {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS", "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"
  };
  

  for(int i = 0; i < 27; i++) {
    Local novoEstado = Local();
    novoEstado.setLocal(arrayEstados[i]);

    this->locais.push_back(novoEstado);
  }
}


void Controller::cadastraInsumosMS(Insumo *novoElemento){
  this->insumosMS.push_back(novoElemento);
}

void Controller::consultaInsumosMS(int userValue){
  switch (userValue) {
    case 1:
      for(auto elem: this->insumosMS) cout << elem->getDescricao() << endl;
      break;
    case 2:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 1) cout << elem->getDescricao() << endl;
      }
      break;
    case 3:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 2) cout << elem->getDescricao() << endl;
      }
      break;
    case 4:
      for(auto elem: this->insumosMS){
        if(elem->getTipoInsumo() == 3) cout << elem->getDescricao() << endl;
      }
      break;
  }
}

/*
void Controller::distribuiInsumoParaEstado(){}
*/

/*
void Controller::consultaInsumosES(Local insumosCadastradosES) {
  vector < Insumo* > teste = insumosCadastradosES.getLocais();


  for(auto x: teste) {
    teste.at();
  } 
}
*/

/* void Controller::consultaInsumosDescricao(Local locais){
    int userValue;

    cout << "Deseja consultar estoque de qual insumo?\n1: Vacina;\n2: Medicamentos;\n3: EPI;\n: ";
    cin >> userValue;
    
    switch (userValue)
    {
    case 1:

        for(i = 0 ; i < locais.Ins.size(), i++){
            // ...;
        }
        break;
    case 2:
        
        break;

    default:
        break;
    }
}

Insumo cadastraInsumosTipo(Local locais, int){

}

void Controller::distribuiInsumo(Local locais, Insumo){

} */
