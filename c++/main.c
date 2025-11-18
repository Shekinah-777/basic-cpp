#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


    setlocale(LC_ALL, "Portuguese");

    char password[] = "12345";
    char tryy[20];

    printf("Bem-vindo ao servidor de Victor Daniel.\nDigite a senha para continuar: ");
    scanf("%s", tryy);

    while (strcmp(tryy, password) != 0) {
        printf("Senha incorreta, tente novamente: ");
        scanf("%s", tryy);
    }

    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);

    char name[20];
    printf("Digite seu nome: ");
    scanf("%s", name);

    if (strcmp(name, "Victor") == 0 || strcmp(name, "victor") == 0) {
        printf("Bem-vindo, admin Victor!\n");
    }

    printf("Seu nome é: %s\n", name);
    printf("Sua idade é: %d\n", age);

    return 0;
}
