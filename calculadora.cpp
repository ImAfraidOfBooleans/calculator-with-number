#include <iostream>
using namespace std;

int main() {

      /*  Esto Es Una Anotacion
               | | |
               V V V                        */
        //aqui estan las variables
        float a;// esto es una a
        float b; //esto es una b
        float resul;
        int x; 


        cout << "pon 1 para sumar ; pon 2 para restar ; pon 3 para multiplicar ; pon 4 para dividir \n "; 

        cin >> x; 

        switch (x)
    {
        case 1:
        cout << "has elegido una suma \n";
        cout << endl ;
        //aqui esta el proceso
        cout << "pon un numero y si no lo pones te lanzo una bomba \n";
        cin >> a;
        cout << "pon otro numero\n";
        cin >> b;
        resul = a + b;

        // aqui sale el resultado
        cout << "el resultado es: "<< resul << endl;
         break; 

         case 2:
        cout << "has elegido una resta \n";
        cout << endl ;

        //aqui esta el proceso
        cout << "pon un numero \n"; 
        cin >> a;
        cout << "pon otro numero\n";
        cin >> b;
        resul = a - b;

        // aqui sale el resultado
        cout << "el resultado es: "<< resul << endl;
         break; 

         case 3:

        cout << "has elegido una multiplicacion  \n";
        cout << endl ;

        //aqui esta el proceso
        cout << "pon un numero \n";
        cin >> a;
        cout << "pon otro numero\n";
        cin >> b;
        resul = a * b;

        // aqui sale el resultado
        cout << "el resultado es: "<< resul << endl;
         break; 

         case 4 : 

         cout << "has elegido una division  \n";
         cout << endl ;

        //aqui esta el proceso
        cout << "pon un numero \n";
        cin >> a;
        cout << "pon otro numero\n";
        cin >> b;
        resul = a / b;

        // aqui sale el resultado
        cout << "el resultado es: "<< resul << endl;
         break; 

         default :
         cout << "pon un numero del 1 al 4 :D \n "; 
        }   


                             


    return 0;
}
