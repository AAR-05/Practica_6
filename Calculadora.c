/* Alexis Aguirre Rojas 
  P6 - Calculadora */
  #include <stdio.h>
  #include <stdlib.h>

  int main()
{
  int a = 0, b = 0;
  int resp, opcion;

  printf("Dime que operacion deseas realizar: \n");
  printf("1 .- Suma\n");
  printf("2 .- Resta\n");
  printf("3 .- Multiplicacion\n");
  printf("4 .- Division\n");
  scanf("%d", &opcion);

  switch(opcion)
  {
    default:
      printf("Opcion no valida.\n");
      return 1;
      break;
    case 1:
     printf("Dame dos numeros para sumar:\t");
     scanf("%d %d", &a, &b);
     resp = a + b;
      break;
    case 2:
       printf("Dame dos numeros para restar:\t");
       scanf("%d %d", &a, &b);
       resp = a - b;
      break;
    case 3:
       printf("Dame dos numeros para multiplicar:\t");
       scanf("%d %d", &a, &b);
       resp = a * b;
      break;
    case 4:
       printf("Dame dos numeros para dividir:\t");
       scanf("%d %d", &a, &b);
        if (b == 0 )
        {
            printf("No existe la division entre cero. \n");
            return 1;
        }
        resp = a / b;
      break;
  }

  printf("El resultado de la operacion es: %d\n", resp);
  return 0;
}
