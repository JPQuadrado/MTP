#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    char c;
    printf("\n DIGITE 'Q' PARA SAIR E QUALQUE OUTRA TECLA PARA INICIAR\n");
    do
    {
	scanf("%c", &c);
	printf("... %d\n", dado());
    }while(c != 'q' && c != 'Q');
    printf("\n ATE A PROXIMA \n");
    return 0;
}
