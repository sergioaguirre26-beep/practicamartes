#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int aux, num[100],x=0,y,N=0, nb, posicion=-1;
	char articulo[100][50],auxc[50],salida='s',opc, opc2, consulta[100][50];
	
	do
	{
		system("cls");
		puts("---Menu de Opciones---");
		puts("a. Registrar articulo");
		puts("b. Consulta general");
		puts("c. Baja por clave de articulo");
		puts("d. Modificacion de descripcion por clave");
		puts("e. Consulta por no. de clave");
		puts("f. Consulta mayor a menor por no. de clave");
		puts("g. Consulta por descripcion");
		puts("h. Salir");
		scanf("%c",&opc);
		getc(stdin);
		
		switch (opc)
		{
		case 'a':
             system("cls");
			do
			{
			if (x>=100)
            puts("Los vectores estan llenos ....");
            else
            {
            printf("Clave de articulo ");
            scanf("%d",&num[x]);
            getc(stdin);
            printf("Nombre de articulo ");
            gets(articulo[x]);
            x++;
            N++;
			puts("Deseas seguir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			system("cls");
		    }
			}while(opc2!='m');
            
		break;
		case 'b':
             system("cls");
			do
			{
			puts ("No.              Nombre");
            puts("_______________________________________");
            for (y=0;y<x;y++)
            printf("%5d %15s\n",num[y],articulo[y]);
            puts("_______________________________________");
            puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
		    }while(opc2!='m');
		break;
		case 'c':
             system("cls");
			do
			{
			puts("introduce la clave del articulo que daras de baja");
			scanf("%d",&nb);
			getc(stdin);
			for(y=0;y<x;y++)
			if(nb==num[y])
			{
			posicion=y;
			break;
			}
			if(posicion==-1)
			puts("clave no existe");
			else
			{
			for(y=posicion;y<x;y++)
			{
			num[y]=num[y+1];
			strcpy(articulo[y],articulo[y+1]);
			}
			x--;
			puts("Baja realizada");
			}
			puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
			}while(opc2!='m');
		break;
		case 'd':
             system("cls");
			do
			{
			puts("Introduce la clave del articulo cuya descripcion quieres cambiar");
			scanf("%d",&aux);
			for(y=0;y<x;y++)
			if(aux==num[y])
			{
			posicion=y;
			break;
			}
			if(posicion==-1)
			puts("La clave no existe");
			else
			{
            puts("_______________________________________");
			printf("%s\n",articulo[posicion]);
			puts("_______________________________________");
			puts("Introduce el cambio de descripcion");
			getc(stdin);
			gets(articulo[posicion]);
			}
			puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
			}while(opc2!='m');
		break;
		case 'e':
            system("cls");
            do
			{
			puts("introduce la clave del articulo que quieres consultar");
			scanf("%d",&nb);
			getc(stdin);
			for(y=0;y<x;y++)
			if(nb==num[y])
			{
			puts("____________________________");
			printf("\t%s\n",articulo[y]);
			puts("____________________________");
			}
			if(posicion==-1)
			puts("clave no existe");
			puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
			}while(opc2!='m');
            
        break;
        case 'f':
            system("cls");
            N=x;
            do
			{
			puts ("No.              Nombre");
            puts("_______________________________________");
            for (x=1;x<N;x++)
            for (y=0;y<N-x;y++)
            if (num[y]<num[y+1])
            {
            aux=num[y];
            num[y]=num[y+1];
            num[y+1]=aux;
            strcpy(auxc,articulo[y]);
            strcpy(articulo[y],articulo[y+1]);
            strcpy(articulo[y+1],auxc);
            }
            for (y=0;y<x;y++)
            printf("%5d %15s\n",num[y],articulo[y]);
            puts("_______________________________________");
            puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
		    }while(opc2!='m');
        break;
        case 'g':
        system("cls");
            do
			{
			puts("introduce la descripcion del articulo que quieres consultar");
			gets(consulta);
			for(y=0;y<x;y++)
			if(strcasecmp(consulta,articulo[y])==0)
			{
			puts("____________________________");
			printf("%5d %15s\n",num[y],articulo[y]);
			puts("____________________________");
			}
			puts("Deseas salir o regresar al menu? s/m"); 
			scanf("%c",&opc2);
			getc(stdin);
			if(opc2=='s')
			return 0;
			else
			system("cls");
			}while(opc2!='m');
        break;
		case 'h':
			return 0;
		break;
		}
	}while(salida=='s');
	system("pause");
	return 0;
}
