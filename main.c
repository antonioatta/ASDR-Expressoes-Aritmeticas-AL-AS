#include <stdio.h>
#include <stdlib.h>
#include "analex.h"
#include "anasint.h"


int main()
{


    printf("Digite expressoes aritmeticas no formato padrao (modo infixo).\n");
    printf("Termine cada expressao com o sinal de igualdade (=) seguido de <enter>.\n");
    printf("Parenteses podem ser usados para quebrar a ordem de precedencia dos \n");
    printf("operadores (+, -, *, e /). Ao final de cada expressao, se ela estiver correta,\n");
    printf("uma mensagem com essa indicacao sera emitida e, em seguida, uma nova \n");
    printf("expressao pode ser digitada.\n");
    printf("Termine a entrda de expressoes com um sinal de igualdade (=) sem expressao.\n");
    printf("\nExpr> ");
    Analex(stdin);
    while (t.cat != SN || t.cod != IGUAL) {
        Expr();
        printf("Resultado> Expressao correta!\n");
        printf("\nExpr> ");
        fflush(stdin);
        Analex(stdin);
    }
    printf("Ate a proxima!");
    return 0;
}
