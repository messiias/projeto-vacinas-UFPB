#include <iostream>
#include <vector>
#include "Controller.h"
#include "../models/Local/Local.h"
#include "../models/Insumos/Insumos.h"
#include "../models/Medicamentos/Medicamentos.h"
#include "../models/Vacina/Vacina.h"
#include "../models/EPI/Epi.h"

Controller::Controller(){}

// Object Insumo (tipo....), std::vector (Informações especificas do insumo)

void Controller::cadastraInsumosMS(Insumo *novoElemento){
  this->insumosMS.push_back(novoElemento);
}

/* void Controller::consultaInsumos(Local locais){
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

} */

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
