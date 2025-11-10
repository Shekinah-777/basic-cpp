/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade ;
    printf ("Digite sua ideade :  ");
    scanf("%d" , &idade );
    
    char nome[20];
    printf("Digite seu nome : ");
    scanf("%s" , nome);
    
    int admin;
    int user;
    
    int cargos[2] = {admin , user};
    
    

    printf("seu nome é : %s \n", nome);
    printf("sua idade é : %d \n", idade);
    return 0;
}
