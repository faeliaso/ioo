/*
Programa:   CaixaAcoplada
Arquivo:    comportaVedacao.cpp
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../includes/comportaVedacao.h" 

using namespace std;

comportaVedacao::comportaVedacao() {
    cout << "Construtor da comporta de Vedação. " << endl;    
}

comportaVedacao::~comportaVedacao() {
    cout << "Destrutor da comporta de Vedação. " << endl;    
}

float comportaVedacao::abrir() {
    cout << "Comporta de vedação aberta. Água saindo !!! " << endl;
    return 0;
}

void comportaVedacao::fechar() {
    cout << "Comporta de vedação fechada." << endl;
}
// Método adicionado para atendimento do requisito 2
float comportaVedacao::abrir(float vazao) {
    cout << "Comporta de vedação aberta. Liberando "<< vazao << " litros de água" << endl;
    return vazao;
}
