#include <stdio.h>

int main(void) {
    
  // estudiante structure
  struct estudiante {
    char id[15];
    char nombre[64];
    char apellido[64];
    float calificacion;
  };
  
  // estudiante structure variable
  struct estudiante std;
  
  // estudiante structure pointer variable
  struct estudiante *direccionMemoria = NULL;
  
  // assign std to ptr
  direccionMemoria = &std;
  
  // get estudiante detail from user
  printf("Enter ID: ");
  scanf("%s", direccionMemoria->id);
  printf("Enter first name: ");
  scanf("%s", direccionMemoria->nombre);
  printf("Enter last name: ");
  scanf("%s", direccionMemoria->apellido);
  printf("Enter calificacion: ");
  scanf("%f", &direccionMemoria->calificacion);
  
  // display result via std variable
  printf("\nResult via std\n");
  printf("ID: %s\n", std.id);
  printf("First Name: %s\n", std.nombre);
  printf("Last Name: %s\n", std.apellido);
  printf("calificacion: %f\n", std.calificacion);
  
  // display result via ptr variable
  printf("\nResult via direccionMemoria\n");
  printf("ID: %s\n", direccionMemoria->id);
  printf("First Name: %s\n", direccionMemoria->nombre);
  printf("Last Name: %s\n", direccionMemoria->apellido);
  printf("calificacion: %f\n", direccionMemoria->calificacion);
  
  return 0;
}