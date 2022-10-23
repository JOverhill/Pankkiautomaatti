#include <stdio.h>
#include <stdlib.h>


void korttiKysymys( void );
void pinKysymys ( void );
void toimintoKysymys (void);
int ottoValinta (int saldo);
void saldoValinta(int saldo);

int main()
{

    korttiKysymys();
    printf("Tervetuloa, syotit kortin \n");
    pinKysymys();
    toimintoKysymys();
    return 0;
}


void korttiKysymys( void ) {
     int kortti;
     while (kortti != 1) {
        printf("Syota kortti kirjoittamalla \"1\"\n");
        scanf("%d", &kortti);
    }
}

void pinKysymys ( void ) {
    int pin;
    while( pin != 1234) {
        printf("Syota PIN (1234) >");
        scanf("%d", &pin);
        if (pin != 1234){
            printf("Syotit vaaran PIN koodin\n");
        }
    }
}

void toimintoKysymys (void) {
     int valinta, k, saldo = 10050;
     char yesno ='y';

     do {
            printf("Valitse OTTO syottamalla 1>\n");
            printf("Valitse SALDO syottamalla 2>\n");
            scanf("%d", &valinta);

            switch (valinta) {
                case 1:
                    saldo = ottoValinta(saldo);
                    break;
                case 2:
                    saldoValinta(saldo);
                    break;
                default:
                    printf("Vaara valinta\n");
                }
                printf("Palaa syottamalla y/n> \n");
                fflush(stdin);
                scanf("%c", &yesno);
                if (yesno == 'n' || yesno =='N'){
                    k = 1;
                }
        } while (k != 1);
        printf("\nKiitos hei");
}


int ottoValinta (int saldo) {
    int otto;
                    printf("Valitsit Otto-toimminon\n\n");
                    printf("Syota haluamasi summa>\n\n");
                    scanf("%d", &otto);
                    if (otto > saldo) {
                        printf("Saldo ei riita\n");
                    }
                    else {
                        saldo = saldo - otto;
                        printf("Nostit %d , saldoa jaljella %d \n", otto, saldo);
                    }
        return(saldo);
}

void saldoValinta (int saldo) {
    printf("Valitsit Saldo-toimminon\n");
    printf("Saldosi on %d\n", saldo);

}
