#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <ctime>  
#include <iostream>
#include <iomanip>

using namespace std;

void operaNumeros() {
    int num1, num2;                                                                 // Declaracion de variables
    char opcion;                                                                    // Declaracion de variables

    cout << "Introduce el primer numero: ";                                         // Pedimos el primer numero
    cin >> num1;                                                                    // Guardamos el primer numero
    cout << "Introduce el segundo numero: ";                                        // Pedimos el segundo numero                        
    cin >> num2;                                                                    // Guardamos el segundo numero

    cout << "Elige una opcion:\n";                                                  // Mostramos las opciones                             
    cout << "<S> Sumar los dos numeros\n";
    cout << "<R> Restar los dos numeros (el primero menos el segundo)\n";
    cout << "<M> Multiplicar los dos numeros\n";
    cin >> opcion;                                                                  // Guardamos la opcion                                    
    opcion = toupper(opcion);                                                       // Convertimos la opcion a mayusculas para evitar errores

    switch (opcion) {                                                               // Evaluamos la opcion y mostramos el resultado correspondiente
        case 'S':
            cout << "La suma es: " << num1 + num2 << endl;  
            break;
        case 'R':
            cout << "La resta es: " << num1 - num2 << endl;
            break;
        case 'M':
            cout << "La multiplicacion es: " << num1 * num2 << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
}

void numeroImpar() {
    int numero=0 ;
    std::cout<<"Ingresa un número: " ;
    std::cin>>numero ;
    
    if (numero%2==0) {
        std::cout << "El número " << numero << " es par\n";
        numeroImpar();
    
    } else {
        std::cout << "El número " << numero << " es impar\n";
    }
}

void sumaPares() {
    int suma = 0;                                                                // Declaracion de variables                                

    for (int i = 0; i <= 100; i += 2) {                                          // Iteramos del 0 al 100 de 2 en 2                     
        if (i % 2 == 0) {                                                        // Si el numero es par lo sumamos
            suma += i;                                                           // Si cumple la condición, sumamos el numero
        }
    }

    cout << "La suma de los numeros pares del 0 al 100 es: " << suma << endl;    // Mostramos el resultado
}

void mediaAritmetica() {
    
    int n;
    cout << "Ingresa la cantidad de numeros a introducir: ";
    cin >> n;

    float sum = 0;
    for (int i = 0; i < n; i++) {
        float num;
        cout << "Ingresa un número " << i+1 << ": ";
        cin >> num;
        sum += num;
    }

    float mean = sum / n;
    cout << "La media aritmética: " << mean << endl;

}

void numeroMagico() {
    srand(time(0));                                                                     // Inicializamos la semilla del generador de numeros aleatorios

    int lowerlimit = 1;                                                                 // Declaracion de variables
    int upperlimit = 100;
    int numeroAleatorio = (rand() % (upperlimit - lowerlimit + 1) + lowerlimit);        // Generamos un numero aleatorio entre 1 y 100
    int numeroUsuario;
    int intentos = 0;

    do {                                                                                // Pedimos un numero al usuario y evaluamos si es mayor o menor que el numero aleatorio
        cout << "Introduce un numero entre 1 y 100: ";
        cin >> numeroUsuario; 
        intentos++;                                                                     // Aumentamos el numero de intentos por cada iteración

        if (numeroUsuario < numeroAleatorio) {                                          // Mostramos si el numero es mayor o menor que el numero aleatorio
            cout << "MAS" << endl;
        } else if (numeroUsuario > numeroAleatorio) {
            cout << "MENOS" << endl;
        }
    } while (numeroUsuario != numeroAleatorio);                                         // Repetimos el proceso hasta que el usuario acierte

    cout << "Acertaste con el valor magico " << numeroAleatorio << " despues de " << intentos << " intentos." << endl;
}

void conversionCelsiusFarenheit() {
    float celsius;                                                                                  // Declaracion de variables
    int numConversiones;
    float incremento;

    cout << "Ingresa el valor inicial en Celsius: ";                                                // Pedimos los datos al usuario                 
    cin >> celsius;
    cout << "Ingresa el número de conversiones a hacer: ";
    cin >> numConversiones;
    cout << "Ingresa el incremento entre los valores Celsius: ";
    cin >> incremento;

    cout << "FARENHEIT\tCELSIUS\n";                                                                 // Mostramos el encabezado de la tabla
    for (int i = 0; i < numConversiones; i++) {                                                     // Iteramos el numero de conversiones a hacer
        float fahrenheit = (9.0/5.0) * celsius + 32;                                                // Calculamos el valor de la conversion
        cout << fixed << setprecision(2) << fahrenheit << "\t" << "\t" << celsius << "\n";          // Mostramos el valor de la conversion
        celsius += incremento;                                                                      // Aumentamos el valor de celsius
    }
}

void serieAritmetica() {
    int a = 1;                                                                      // Declaracion de variables
    int d = 3;
    int n = 25;
    int suma = 0;

    for (int i = 1; i <= n; i++) {                                                  // Iteramos de 1 a 25
        int termino = a + (i - 1) * d;                                              // Calculamos el termino de la serie
        suma += termino;                                                            // Sumamos el termino a la suma total
        cout << "Termino " << i << ": " << termino << endl;                         // Mostramos el termino        
    }

    cout << "Valor total de la serie: " << suma << endl;                            // Mostramos el valor total de la serie
}


int main() {
    conversionCelsiusFarenheit();
    return 0;
}