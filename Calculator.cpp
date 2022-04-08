#include <iostream>
using namespace std;

int main() 
{

      /*  This is a comment
               | | |
               V V V                        */
        //here are the variables
        float a;// it is a
        float b; //it is b
        float resul;
        int x; 


        cout << "put 1 to add ; put 2 to subtract ; put 3 to multiply ; put 4 to split \n "; 

        cin >> x; 

        switch (x)
    {
        case 1:
        cout << "You have chosen a sum\n";
        cout << endl ;
        //here is the process
        cout << "put a number and if you don't put it I'll throw a bomb to you \n";
        cin >> a;
        cout << "put another number\n";
        cin >> b;
        resul = a + b;

        // here comes the result
        cout << "the result is: "<< resul << endl;
        break; 
 
        case 2:
        cout << "you have chosen a subtraction \n";
        cout << endl ;

        //here is the process
        cout << "put a number \n";
        cin >> a;
        cout << "put another number\n";
        cin >> b;
        resul = a - b;

        // here comes the result
        cout << "el resultado es: "<< resul << endl;
         break; 

         case 3:

        cout << "you have chosen a multiplication  \n";
        cout << endl ;

        //here is the process
        cout << "put a number \n";
        cin >> a;
        cout << "put another number\n";
        cin >> b;
        resul = a * b;

        // here comes the result
        cout << "the result is: "<< resul << endl;
         break; 

         case 4 : 

         cout << "you have chosen a division  \n";
         cout << endl ;

        //here is the process 
        cout << "put a number \n";
        cin >> a;
        cout << "put another number\n";
        cin >> b;
        resul = a / b;

        // here comes the result
        cout << "the result is: "<< resul << endl;
        break; 

        default :
        cout << "put a number from 1 to 4 :D \n "; 
    }   
                             
    return 0;
}
