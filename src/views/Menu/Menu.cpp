#include <iostream>
#include <string>
#include "Menu.h"
#include "../../controller/Controller.h"
#include "../../models/Insumos/Insumos.h"
#include "../../models/Medicamentos/Medicamentos.h"
#include "../../models/Vacina/Vacina.h"
#include "../../models/EPI/Epi.h"

using namespace std;

void Menu::Menu1(){
  Controller *instControl = new Controller();

  int userValue;

  cout << "=============================\n\tMinisterio da saúde\t\n=============================";

  cout << "1 - Cadastrar insumo no MS\n2 - Consulta insumos disponiveis no MS\n3 - Descrição dos insumos no MS\n" << endl;
  cout << "4 - Cadastrar Tipo do insumo\n5 - Distribui insumos pros estados\n6- Sair\n: ";
  cin >> userValue;
  
  switch (userValue)
  {
  case 1:
    cout << "Qual insumo deseja inserir no MS?\n1 - Vacina\n2 - Medicamento\n3 - EPI\n: ";
    cin >> userValue;

    instControl->cadastraInsumosMS(cadastraDeInsumoMS(userValue));
    break;
  case 2:
    consultaInsumos(Local);
    break;
  case 3:
    consultaInsumosDescricao(Local);
    break;
  case 4:
    cadastraInsumosTipo(Local, int);
    break;
  case 5:
    distribuiInsumo(Local, Insumo);
    break;
  case 6:
    /* SAIR */
    break;
  default:
    cout << "Opção Invalida" << endl;
    break;
  }
}

Insumo* cadastraDeInsumoMS(int userValue){

  // Insumos
  string nome;
  int quantidadeItem;
  int valorUnitario;
  string dataVencimento;
  string fabricante;
  int tipoInsumo;

  // Vacinas
  string tipoVacina;
  int dose;
  int intervaloDose;

  // Medicamentos
  string dosagemMedicamentos;
  string formaAdministracao;
  string formaDisponibilizacao;
  
  // EPI
  string tipoEpi;
  string infoEpi;
  
  switch (userValue)
  {
  case 1:
    Vacina *vac = new Vacina();
    Insumo *teste = vac;

    cout << "Digite o nome da vacina: ";
    cin >> nome;
    vac->setNome(nome);
    
    cout << "Quantidade de itens: ";
    cin >> quantidadeItem;
    vac->setQuantidadeItem(quantidadeItem);

    cout << "Valor unitario: ";
    cin >> valorUnitario;
    vac->setValorUnitario(valorUnitario);

    cout << "Data de vencimento: ";
    cin >> dataVencimento;
    vac->setDataVencimento(dataVencimento);

    cout << "Fabricante: ";
    cin >> fabricante;
    vac->setFabricante(fabricante);

    cout << "Tipo da vacina: ";
    cin >> tipoVacina;
    vac->setTipoVacina(tipoVacina);

    cout << "Doses:  ";
    cin >> dose;
    vac->setDose(dose);

    cout << "Intervalo: ";
    cin >> intervaloDose;
    vac->setIntervalo(intervaloDose);

    return teste;
  case 2:

    Medicamentos *med = new Medicamentos;
    
    cout << "Digite o nome da vacina: ";
    cin >> nome;
    med->setNome(nome);
    
    cout << "Quantidade de itens: ";
    cin >> quantidadeItem;
    med->setQuantidadeItem(quantidadeItem);

    cout << "Valor unitario: ";
    cin >> valorUnitario;
    med->setValorUnitario(valorUnitario);

    cout << "Data de vencimento: ";
    cin >> dataVencimento;
    med->setDataVencimento(dataVencimento);

    cout << "Fabricante: ";
    cin >> fabricante;
    med->setFabricante(fabricante);

    cout << "Dosagem: ";
    cin >> dosagemMedicamentos;
    med->setDosagem(dosagemMedicamentos);

    cout << "Forma de administração: ";
    cin >> formaAdministracao;
    med->setFormaAdmin(formaAdministracao);
    
    cout << "Forma de disponibilização: ";
    cin >> formaDisponibilizacao;
    med->setDisponibilizacao(formaDisponibilizacao);

    return med;

  
  default:
    break;
  }

}