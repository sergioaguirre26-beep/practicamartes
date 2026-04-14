#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc, num1, num2, total;
    
    puts("***Calculadora de suma y resta***");
    puts("1. Suma");
    puts("2. Resta");
    puts("3. Salir");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1:
            puts("introduce el primer numero");
            scanf("%d",&num1);
            puts("Introduce el segundo numero");
            scanf("%d",&num2);
            total=num1+num2;
            printf("el total es %d\n",total);
        break;
        case 2:
            puts("introduce el primer numero");
            scanf("%d",&num1);
            puts("Introduce el segundo numero");
            scanf("%d",&num2);
            total=num1-num2;
            printf("el total es %d\n",total);
        break;
        case 3: 
            puts("Byes");
        break;
        default:
            puts("opcion invalida");
        break;
    }
    system("pause");
    return 0;
}
