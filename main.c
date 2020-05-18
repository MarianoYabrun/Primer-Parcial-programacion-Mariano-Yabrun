#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

}eNotebook;

float aplicarDescuento( float precio);
int contarCaracteres(char palabra[], int tam, char caracter);
 void ordenarNotebooks(eNotebook vec[], int tam);
void mostrarNotebooks(eNotebook x[], int tam);


int main()
{
  float precio = 3000;
  char nombre[TAM] = "Mariano";

  eNotebook lista[5] = {{1000, "intel i9", "asus", 23400},{1003, "amd 2600x", "hp", 50000 },{1002, "intel i7", "lenovo", 60000 },{1001, "amd 1300x", "asus", 40000},{1005, "intel i3", "hp", 20000}   };


contarCaracteres (nombre, TAM, 'a');
  aplicarDescuento(precio);



 mostrarNotebooks(lista, 5);
  ordenarNotebooks (lista, 5);
mostrarNotebooks(lista, 5);
  return 0;
}


 float aplicarDescuento( float precio)
 {
     float resultado;
     float descuento;

     descuento = precio * 5 /100;
     resultado = precio - descuento;
     printf(" el precio con descuento es de %.2f \n\n", resultado);

     return  resultado;
 }


 int contarCaracteres(char palabra[], int tam, char caracter)
 {
     int contador =0;

     for(int i=0;i<tam;i++)
     {
        if(palabra[i] == caracter)
         {
             contador ++;
         }

     }
      printf("\n\nla cantidad de veces que aparece ese caracter en la cadena es : %d\n\n", contador);
     return contador;
 }


 void ordenarNotebooks(eNotebook vec[], int tam)
{
    eNotebook aux;

    for(int i=0; i<tam-1; i++)
    {

        for(int j=i+1;j<tam; j++)
        {

            if(strcmp(vec[i].marca, vec[j].marca) > 0)
            {

                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;


            }else if(strcmp(vec[i].marca, vec[j].marca) == 0 && vec[i].precio < vec[j].precio )

            {

                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;

            }
        }
    }
}



void mostrarNotebooks(eNotebook x[], int tam)
{
printf("\n\n****LISTADO DE NOTEBOOKS****\n\n");

    for(int i = 0; i<tam;i++)
    {
    printf("\n%4d  ", x[i].id);
    printf("   %4s", x[i].procesador);
    printf("   %4s", x[i].marca);
    printf("   %.2f\n", x[i].precio);

    }


}
