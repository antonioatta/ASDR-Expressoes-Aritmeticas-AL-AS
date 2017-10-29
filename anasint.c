#include <stdlib.h>
#include "analex.h"
#include "anasint.h"

void Expr() {   // EXPR

    Termo();
    Resto();
}
void Termo() {

    Fator();
    Sobra();
}
void Resto() {   // RESTO

    if ((t.cat==SN && t.cod==SOMA) || (t.cat==SN && t.cod==SUBT))  {
        Analex(stdin);
        Termo();
        Resto();
    }
    else ;       // saida por vazio
}
void Sobra() {   // SOBRA

    if ((t.cat==SN && t.cod==MULT) || (t.cat==SN && t.cod==DIVI))  {
        Analex(stdin);
        Fator();
        Sobra();
    }
    else ;      // saida por vazio
}
void Fator() {  // FATOR

    if (t.cat==SN && t.cod==ABRE_P) {
        Analex(stdin);
        Expr();
        if (t.cat!=SN || t.cod!=FECHA_P) {
            Erro(3);
        }
        Analex(stdin);
    }
    else if (t.cat==OP) {
        Analex(stdin);
    }
    else Erro(4);
}
