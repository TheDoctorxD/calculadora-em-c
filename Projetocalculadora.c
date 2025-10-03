#include <stdio.h>
#include <string.h>



int adic(void){
    float a, b;

    printf ("Digite o primeiro numero: ");
    scanf(" %f", &a);
    printf ("Digite o segundo numero: ");
    scanf(" %f", &b);
    printf ("Resultado: %.2f + %.2f = %.2f\n", a,b,a+b);

    char sn;
    int cw;
    cw=0;
    printf("Deseja realizar outra operacao? (s/n): \n");
    while (cw==0)
    {
    scanf(" %c", &sn);
    
           {
            if(sn=='s' || sn=='S'){
                cw=1;
                return 1;
            }
            else if (sn=='n' || sn=='N'){
                printf ("Obrigado por usar a calculadora! Ate a proxima.\n");
                cw=1;
                return 5;
            }
            else{
                printf ("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            }
        }
    }
}

int sub(void){
    float a, b;

    printf ("Digite o primeiro numero: ");
    scanf(" %f", &a);
    printf ("Digite o segundo numero: ");
    scanf(" %f", &b);
    printf ("Resultado: %.2f - %.2f = %.2f\n", a,b,a-b);

    char sn;
    int cw;
    cw=0;
    printf("Deseja realizar outra operacao? (s/n): \n");
    while (cw==0)
    {
    scanf(" %c", &sn);
    
           {
            if(sn=='s' || sn=='S'){
                cw=1;
                return 1;
            }
            else if (sn=='n' || sn=='N'){
                printf ("Obrigado por usar a calculadora! Ate a proxima.\n");
                cw=1;
                return 5;
            }
            else{
                printf ("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            }
        }
    }
}

int mult(void){
    float a, b;

    printf ("Digite o primeiro numero: ");
    scanf(" %f", &a);
    printf ("Digite o segundo numero: ");
    scanf(" %f", &b);
    printf ("Resultado: %.2f * %.2f = %.2f\n", a,b,a*b);

    char sn;
   int cw;
    cw=0;
    printf("Deseja realizar outra operacao? (s/n): \n");
    while (cw==0)
    {
    scanf(" %c", &sn);
    
           {
            if(sn=='s' || sn=='S'){
                cw=1;
                return 1;
            }
            else if (sn=='n' || sn=='N'){
                printf ("Obrigado por usar a calculadora! Ate a proxima.\n");
                cw=1;
                return 5;
            }
            else{
                printf ("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            }
        }
    }
}

int div(void){
    float a, b;

    printf ("Digite o primeiro numero: ");
    scanf(" %f", &a);
    printf ("Digite o segundo numero: ");
    scanf(" %f", &b);
    if (b!=0){
        printf ("Resultado: %.2f / %.2f = %.2f\n", a,b,a/b);
    }
    else {
        printf ("Erro: Divisao por zero nao eh permitida.\n");
    }
    char sn;
    int cw;
    cw=0;
    printf("Deseja realizar outra operacao? (s/n): \n");
    while (cw==0)
    {
    scanf(" %c", &sn);
    
           {
            if(sn=='s' || sn=='S'){
                cw=1;
                return 1;
            }
            else if (sn=='n' || sn=='N'){
                printf ("Obrigado por usar a calculadora! Ate a proxima.\n");
                cw=1;
                return 5;
            }
            else{
                printf ("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
            }
        }
    }
}

int main (){

    int menu;

do{
    printf ("===============================\n");
    printf ("Calculadora Simples\n");
    printf ("===============================\n");
    printf ("Selecione uma operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n");
    printf ("Opcao: ");

    scanf ("%d", &menu);

        if(menu!= 1 && menu!= 2 && menu!= 3 && menu!= 4 && menu!= 5)
        {
            printf("Resposta invalida, tente novamente:\n");
            continue;
        }
    
        switch (menu)
        {
        case 1:
            menu = adic();
            break;

        case 2:
            menu = sub();
            break;

        case 3:
            menu = mult();
            break;
        
        case 4:
            menu = div();
            break;

        case 5:
            printf ("Obrigado por usar a calculadora! Ate a proxima.");
            break;
        }

    } while (menu != 5);
}
