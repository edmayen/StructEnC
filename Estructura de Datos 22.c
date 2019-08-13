#include<stdio.h>
#define A 50
struct informa
{
    char nombre[A];
    int edad;
    float estatura;
};
typedef struct informa sinonimo;
sinonimo Carga1(sinonimo);
void Carga2(sinonimo*);
void Impresion(sinonimo,sinonimo,sinonimo*);

int main()
{
    system("color F0");
    printf("\n\t\t\t\tUso Struct.\n");
    sinonimo x1, x2={"Seth",22,1.85},x3,*ap;
    x1=x2;
    x2=Carga1(x1);
    ap=&x3;
    Carga2(ap);
    Impresion(x1,x2,ap);
    getchar();
    getchar();
}

sinonimo Carga1(sinonimo x1)
{
    printf("\nIngresa el Nombre del Primer Alumno: ");
    gets(x1.nombre);
    printf("\nIngresa la edad del Primer Alumno: ");
    scanf("%d",&x1.edad);
    printf("\nIngresa la estatura del Primer Alumno: ");
    scanf("%f",&x1.estatura);
    return(x1);
}

void Carga2(sinonimo *ap)
{
    getchar();
    printf("\n\nIngresa el Nombre del Segundo Alumno: ");
    gets(ap->nombre);
    printf("\nIngresa la Edad del Segundo Alumno: ");
    scanf("%d",&ap->edad);
    printf("\nIngresa la Estatura del Segundo Alumno: ");
    scanf("%f",&ap->estatura);
}

void Impresion(sinonimo x1, sinonimo x2, sinonimo *ap)
{
    printf("\n\nEstructura Igualada a otra Estructura Inicializada.\n");
    puts(x1.nombre);
    printf("%d",x1.edad);
    printf("\n%f",x1.estatura);
    printf("\n\nEstructura Paso por Valor.\n");
    puts(x2.nombre);
    printf("%d",x2.edad);
    printf("\n%f",x2.estatura);
    printf("\n\nEstructura Paso por Referencia.\n");
    puts(ap->nombre);
    printf("%d",ap->edad);
    printf("\n%f",ap->estatura);
}
