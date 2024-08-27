#include <stdio.h>
#include <stdlib.h>
void main() 
{
    size_t	tamaño;
    FILE	*archivo;
    char	*reservar;
    int		aux;

    archivo = fopen("hola.txt", "rb");
    if (archivo)
    {
      fseek(archivo, 0, SEEK_END);
      tamaño = ftell(archivo);
      rewind(archivo);
      reservar = malloc(tamaño);
      aux = 0;
      fread(reservar, sizeof(char), tamaño, archivo);

      while(tamaño--)
      {
        printf("%c", reservar[aux++]);
      }
    }
}
