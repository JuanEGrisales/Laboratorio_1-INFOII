#include <iostream>

using namespace std;

int sig_primo(int);

int main()
{
    //Grupo 4 (6-7) problemas : 2,4,5,7,9,11,13,14,15,17
    int opcion=1;    //en la variable opcion es el numero del ejercicio que se quiere correr

    while(opcion!=0) // este ciclo es para tener un menu de los diferentes puntos del Laboratorio #1
    {
     system("cls");
     cout <<"Menu practica 1"<<endl<<endl;
     cout <<"1. para determinar la minima combinacion de billetes y monedas para una cantidad de dinero determinada "<<endl;
     cout <<"2. Lee dos numeros enteros que representan tiempo y suma las horas y minutos"<<endl;
     cout <<"3. Programa que ejecuta un patron de acuerdo a un entero impar"<<endl;
     cout <<"4. Para hallar la suma de los numeros pares menores que n en una serie fibonacci"<<endl;
     cout <<"5. recibe un numero N e Imprimir el resultado de la suma de los digitos elevados a si mismos"<<endl;
     cout <<"6. Hallar el minimo comun multiplo entre 1 y el numero ingresado"<<endl;
     cout <<"7. Calcula la suma de los numeros primos menores al numero ingresado"<<endl;
     cout <<"8. Halla el numero palindromo mayor al multiplicar dos numeros de 3 cifras"<<endl;
     cout <<"9. Recibe un numero impar y calcula la suma de los numeros de la diagonal de una espiral n*n"<<endl;
     cout <<"10. Recibe un numero K y calcula cual es el numero triangular que tiene mas de k divisores"<<endl;
     cout <<"0. para salir"<<endl;
     cout<<endl;
     cin>>opcion;



     //int esp=0,ast=0,impar=0,j,i,a;//variables caso 3
     //unsigned long long aux = 1, fib = 1, lim, init,suma=0; int num;//variables caso 4
     //int mod,aux1=0,aux2=0,e=0;//variables caso 5
     //int n,sum=0,s;//variables caso 7
     //int inx=1,iny=0, term=0,pal;//Variables caso 8
     //int num1=1,ad=2,tot=0,tam=2;//variables caso 9
     //int tri=0,div=0,entr;//variables caso 10

     system("cls");
     switch (opcion) { //esta es la funcion que te permite escoger el punto que quieres correr

     case 1:{
         /*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
         y monedas para una cantidad de dinero determinada. Los billetes en circulación son de
         $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
         Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
         la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad
         deseada, el sistema deberá decir lo que resta para lograrla. Ej: si se ingresa 47810, el programa debe
         imprimir: 50000 : 0 20000: 2 10000 : 0 5000: 1 2000 : 1 1000: 0 500 : 1 200: 1 100 : 1 50: 0 Faltante: 10 */
         cout<<"Ejecutando el punto 2 de la practica # 1 ..."<<endl;
         cout<<"Ingrese la cantidad de dinero que deseas saber la minima combinacion "<<endl;
         int pesos,a,b;
         cin >>pesos;
         if (pesos>=0)
           {
            a = pesos/50000; //división entera
            b = pesos%50000; // división modulo o resto
            cout<<"50000 : "<<a<<endl;
            if (b>=0) {
                a = pesos/20000;
                b = pesos%20000;
                cout<<"20000 : "<<a<<endl;
                if (b>=0) {
                    pesos=b;
                    a = pesos/10000;
                    b = pesos%10000;
                    cout<<"10000 : "<<a<<endl;
                    if (b>=0) {
                        pesos=b;
                        a = pesos/5000;
                        b = pesos%5000;
                        cout<<"5000 : "<<a<<endl;
                        if (b>=0) {
                            pesos=b;
                            a = pesos/2000;
                            b = pesos%2000;
                            cout<<"2000 : "<<a<<endl;
                            if (b>=0) {
                                pesos=b;
                                a = pesos/1000;
                                b = pesos%1000;
                                cout<<"1000 : "<<a<<endl;
                                if (b>=0) {
                                    pesos=b;
                                    a = pesos/500;
                                    b = pesos%500;
                                    cout<<"500 : "<<a<<endl;
                                    if (b>=0) {
                                        pesos=b;
                                        a = pesos/200;
                                        b = pesos%200;
                                        cout<<"200 : "<<a<<endl;
                                        if (b>=0) {
                                            pesos=b;
                                            a = pesos/100;
                                            b = pesos%100;
                                            cout<<"100 : "<<a<<endl;
                                            if (b>=0) {
                                                pesos=b;
                                                a = pesos/50;
                                                b = pesos%50;
                                                cout<<"50 : "<<a<<endl;
                                                if (b>=0) {
                                                    cout<<"Faltante : "<<b<<endl;
                                                }
                                            }
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }

         }
         else {cout<<"opcion ingreesada no es valida"<<endl;}
         break;
     }

     case 2:{
         /*Problema 4. Escriba un programa para leer dos números enteros
         con el siguiente signicado: el valor del primer número representa
         una hora del día en un reloj de 24 horas, de modo que 1245 representa
         las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo
         de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos.
         El programa debe sumar esta duración primer número, y el resultado será impreso en la
         misma notación, en este caso 1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.
         Nota: el formato de salida debe ser: La hora es 1630. Otra nota: se debe imprimir un mensaje
         como el siguiente cuando uno de los datos ingresados en inválido: 1560 es un tiempo invalido*/

         int x,y,c=0,d=0,minutos=0,horas=0,ha;
         cout<<"Ejecutando el punto 4 de la practica # 1 ..."<<endl;
         cout<<"Ingrese un numero entero que represente la primera hora "<<endl;
         cin>> x;
         cout<<"Ingrese un numero entero que represente la segunda hora "<<endl;
         cin>>y;

         if (x%100==60){cout<<x<<" es un tiempo invalido."<<endl;}
         //else if (y%100==60){cout<<y<<" es un tiempo invalido."<<endl;}
         else{
             c=x/100;//hora del primer numero
             d=x%100;//minutos del primer numero
             x=y/100;//hora del segundo numero
             y=y%100;//minutos del segundo numero

             minutos=d+y;
             ha=minutos/60;
             minutos%=60;
             horas=c+x+ha;
             horas%=23;
             cout<<"La hora es : "<<horas<<minutos<<endl;
         }
         break;
     }

     case 3:{

         /*Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
              *
             ***
            *****
           *******
            ******
             ***
              *

         El tamaño del patrón estará determinado un número entero impar que ingrese el usuario.
         En el ejemplo mostrado, el tamaño de la figura es 7*/
         cout<<"Ejecutando el punto 5 de la practica # 1 ..."<<endl;
         int impar=2,i,j,a,b;
         cout<<"ingrese un numero impar ->";
         //int esp=0,ast=0,impar=0,j,i,a;//variables caso 3
         cin>>impar;

         while (impar%2==0)
            { cout<<"Entrada invalida. Ingrese un numero impar"<<endl;
             cin>>impar;
         }
            a=impar/2,b=1;
            for (i=1;i<=(impar/2)+1;i++)
                {
                    for (j=a;j>0;j--)
                        cout<<' ';
                    a-=1;
                    for(j=0;j<b;j++)
                        cout<<'*';
                    cout<<endl;
                    b+=2;
            }
            a=1,b=impar-2;
            for (i=1;i<(impar/2)+1;i++)
                {

                    for (j=a;j>0;j--)
                        cout<<' ';
                    a+=1;
                    for(j=0;j<b;j++)
                        cout<<'*';
                    cout<<endl;
                    b-=2;
            }
         break;
     }

     case 4:{
         /*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e
          inicia con 1 y 1. Ej: 1, 1, 2, 3, 5, 8, .... Escriba un programa que reciba un número n
          y halle la suma de todos los números pares en la serie de Fibonacci menores a n. Ej: si se
          ingresa 10, sería la suma de 2+8 =10 Nota: el formato de salida debe ser: El resultado de la suma es: 10 */
         cout<<"Ejecutando el punto 7 de la practica # 1 ..."<<endl;
         cout << "Ingrese un numero para la sucesion de fibonacci: ";
         //int aux = 1, fib = 1, lim, init,suma=0;
         unsigned long long aux = 1, fib = 1, lim, init,suma=0;
         cin >> lim;
         if(lim > 0) {
           for(init = 1; init < lim; init++) {
             //cout << fib<<", ";
             aux += fib;
             fib = aux - fib;
             if (fib%2==0){
                 if (fib<lim)
                     suma+=fib;
              }
            }
          }
          else {
            cout << "El numero debe ser mayor a cero!!" << endl;
          }
          cout<< "\n" <<"El resultado de la suma es: "<<suma<< "\n";
         break;
     }

     case 5:{
         /*Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
         de todos sus dígitos elevados a sí mismos. Ej: si se ingresa 1223 el resultado sería 11 + 22 + 22 + 33 = 36
         Nota: la salida del programa debe ser: El resultado de la suma es: 36 */
         cout<<"Ejecutando el punto 9 de la practica # 1 ..."<<endl;
         cout <<"ingresa un numero entero ->";
         int mod=0,aux1=0,aux2=0,e=0,num=0;
         cin >> num;

          while (num>0)
          {
              mod = num%10;
              num = num/10;
              aux1 = mod;
              aux2=mod;//guarda el digito del modulo el cual va ser multiplicado

              while (mod>1)//ciclo que permite multiplicar el digito por si mismo
              {
                  aux1*=aux2;//multiplica el digito por si mismo
                  mod--;

              }

              e+=aux1; //variable que guarda el resultado de la suma
          }

          if (num<0)
              cout <<"Ingresa un valor positivo"<<endl;
          else
              cout<<"El resultado de la suma es: "<<e<<endl;
         break;
     }

     case 6:{
         /*Problema 11. Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
         todos los números enteros entre 1 y el número ingresado. Ej: Si se recibe 4 el programa debe
         imprimir 12. Nota: la salida del programa debe ser: El minimo comun multiplo es: 12 */
         cout<<"Ejecutatando el punto 11 de la practica #1..."<<endl;
         int ent;
         int mcm;
         int ter1;
         int ter2;

         cout<<"Ingrese el numero: "; cin>>ent;

         if (ent>0){
             mcm = 1;
             cout<<"El MCM de todos los numero menores a "<<ent<<" es: ";
             for(; ent>0; ent--){
                 ter1 = ent;
                 ter2 = mcm;
                 while(ter1 != ter2) { // calcula el MCD entre a y b
                     if(ter1 > ter2)
                         ter1 -= ter2;
                     else
                         ter2 -= ter1;
                 }
                 mcm = (ent*mcm)/ter1; // formula para el MCM: (ent*mcm)/MCD(ent, mcm)
             }
             cout<<mcm<<endl;
         }
         else
         cout<<"Ingrese un entero positivo!"<<endl;
         break;
     }

     case 7:{
         /*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
         menores que el número ingresado. Ej: Si se recibe 10 el programa debe imprimir 17.
         Nota: la salida del programa debe ser: El resultado de la suma es: 17. */
         cout<<"Ejecutatando el punto 13 de la practica #1..."<<endl;
         cout<<"ingrese un numero entero"<<endl;
         int n,sum=0,s;
         cin>>n;
         for (int i=1;i<n;i++){//ciclo para hallar los numeros primos menores que n
             s= sig_primo(i);
             if (s<n){
                 if (s!=sig_primo(i-1)){//condicional que determina si el numero primo es repetido si es repetido no se suma
                     //cout<<"primo : "<<s<<endl;
                     sum+=s;
                 }
             }
         }
         cout<<"El resultado de la suma es: "<<sum<<endl;
         break;
     }

     case 8:{
         /*Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
         Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
         como una multiplicación de números de 3 dígitos. Ej: una de las posibles respuestas es: 143*777=111111.
         Nota: la salida del programa debe ser: 143*777=111111 */

         int inx=1,iny=0, term=0,pal;

         cout<<"Ejecutatando el punto 14 de la practica #1..."<<endl;
                 for (int i=999;i>100;i--){
                     for(int j=999;j>100;j--){
                        inx= i*j;
                        iny=inx;
                        int a=1,cont=0;
                        while(a<7){//ciclo que voltea el numero,para despues verificar si el numero es palindromo
                            term=iny%10;
                            iny=iny/10;
                            cont=(cont*10)+term;
                            a++;
                         }
                         if (inx==cont){ //condicional que determina si el numero es palindromo, si lo es lo imprime
                             if (inx>pal){
                                    system("cls");
                                    pal=inx;
                                    //cout<<"palindrome:"<<pal<<endl;
                                    cout<<"el mayor palindrome es:"<<i<<"*"<<j<<" = "<<pal<<endl;
                             }
                         }
                     }
                 }
         break;
     }

     case 9:{
         /*Problema 15. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
          se genera una espiral de números como la siguiente:
          21 22 23 24 25
          20 7 8 9 10
          19 6 1 2 11
          18 5 4 3 12
          17 16 15 14 13
          En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
          Escriba un programa que reciba un número impar n y calcule la suma de los números
          en la diagonal de una espiral de nxn.*/

         int num1=1,ad=2,tot=0,tam=2;

         while (tam%2==0){
             cout<<"Ingresa un numero impar"<<endl;
             cin>>tam;
         }

         for(int i=0;i<(tam-1)/2;i++){
             tot+=num1;
             num1+=ad;
             tot+=num1;
             num1+=ad;
             tot+=num1;
             num1+=ad;
             tot+=num1;
             num1+=ad;
             ad+=2;
         }
         tot+=num1;
         cout<<"En una espiral de "<<tam<<"X"<<tam<<" la suma es: "<<tot<<endl;
         break;
     }

     case 10:{
         /*Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo
         con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28... Si listamos
         los números triangulares y sus divisores tenemos: Escriba un programa que reciba un número k y calcule
         cual es el primer número triangular que tiene más de k divisores. Tip: el enésimo número triangular se
         puede representar como n*(n+1)/2*/
         int tri=0,div=0,entr;
         cout<<"Ejecutando el punto 17 de la practica # 1 ..."<<endl;
         cout<<"Ingrese un numero entero K : "<<endl;
         cin>>entr;

         for(int i=1;div!=entr+1;i++){
             tri=i*(i+1)/2;
             div=0;
             for (int j=1;j<=tri;j++){
                 if (tri%j==0){
                     div++;
                 }

             }
             if (div>entr){
                 cout<<"El numero es: "<<tri<<" que tiene "<<div<<" divisores."<<endl;
                 break;

             }
         }
         break;
     }
     case 0:
         break;
         
     default:
          cout<<"opcion no valida"<<endl;
         break;
     }



    system("PAUSE");
    }



    return 0;
}

int sig_primo(int n){
    n++;
    if(n==2){
        return n;
    }
    if(n%2==0){
        n++;
    }
    bool a=true;
    int i;
    while(true){
        for(i=3;i<=n/2;i++){
            if(n%i==0){
                a=false;
                break;
            }
        }
        if(a==true)
            return n;
        else
            n+=2;
        a=true;
    }
}
