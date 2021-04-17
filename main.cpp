#include <iostream>

using namespace std;

int main()
{
    int N; //Numero del usuario
    cout<<"Ingrese un numero de maximo 4 cifras: "; cin>>N;
    int Prod=9999999;//Producto inicial
    int Mod=10;//Modulo para palindrome
    int Div=1000000; //Division para palindrome
    int N2=0;//Numero para verificar palindrome
    int N3=0;//Numero para verificar palindrome
    int N4=0;//Numero para verificar palindrome
    int i=0;//Variable para ver el numero de cifras

    if (N>=10000){

        cout<<"El numero tiene mas de 4 cifras: ";

      }
    else{
        for(i=1000;Prod>=1000001;i--){
            Prod=i*N;
            N2=Prod;
            N3=N2%Mod;
            N4=N2/Div;
            while (N3==N4){
                Mod=Mod*10;
                Div=Div/10;
                break;

            }





        }

    cout<<"El numero palindromo mas pequeno de 7 cifras es: "<<N3<<endl;
    }

    return 0;
}
