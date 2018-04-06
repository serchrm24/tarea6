#include<stdio.h>
int main(){ 
    int opc,s,ac,x,f;
    float m;
    double k;
    printf("\n                   Programa que realiza cuatro operaciones");
    printf("\n                       selecciona la opcion deseada"); 
    printf("\n 1)suma de 20 primeros pares.   2)obtener el factorial de 2 a 20.");
    printf("\n             3)serie de numeros.   4)descuentos.");
    printf("\n                        selecciona una opcion.");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1: 
        s=0;
        ac=0;
        do
        { 
            do
            {
                ++s;
            }
            while(s%2!=0);
            printf("\n%i",s);
            ac=ac+s;
        }
        while(s<40);
        printf("\nLa suma es:");
        printf("%i",ac);
        printf("\n");
        break;
        case 2:
        printf("\nobtener el factorial de X");
        printf("\nescribe el valor de X!");
        scanf("%i",&x);
        f=x;
        if(x>1||x<21){
            do
            {
               f=f*(x-1);
               --x;
            }
            while(x>1);
            printf("el factorial es:%i",f);
            printf("\n");  
         }
         else {
        printf("\nno obtiene este factorial.");
        printf("\n");
        }
        break;
        case 3:
        printf("\nno resuelto");
        break;
        case 4:
        printf("\nseleccione descuentos por compras");
        scanf("%d",&f);
        switch(f)
        {
            case 0:
            printf ("\nBolita de color negro");
            k=10;
            break;
            case 1: 
            printf ("\nBolita de color verde"); 
            k=25;
            break;
            case 2: 
            printf ("\nBolita de color amarillo"); 
            k=50;
            break;
            case 3: 
            printf ("\nBolita de color azul"); 
            k=75;
            break;
            case 4: 
            printf ("\nBolita de color rojo"); 
            k=100;
            break;
            default:
            k=0;
            printf ("\n Sin descuento");
        }
        printf ("\n\nSu descuento es de %2.2f porciento",k);
        printf ("\nIngrese importe total de la compra (sin descuento): $ ");
        scanf("%f",&m);
        k=m * ( 1 -k / 100);
        printf ("\nSu importe total de compra fue: %4.2f",m);
        printf("\nEl importe total con el descuento será de: $ %4.2f",k);
        }
return 0;
}




