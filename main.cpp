/*
Nome : Giulio 
Cognome : Anyanwu 
Matricola : S4511135
Esercizio : La serie di Fibonacci è una successione di numeri interi i cui primi due elementi sono 1 e 1, e ciascun altro elemento è uguale alla somma dei due termini precedenti.
*/

#include <iostream>
using namespace std;

int main() 
{
        int a=0;
	int b=1;
	int c=0;
	int n=0;
	int i;
	
    cin >> n;

    if(n>=2)
	{
        for(i=0;i<n; i++)
		{
            c=a+b;
            b=a;
            a=c;
            cout<<c<<endl;
        }
    }
	else
	{
        cout << "errore"<< endl;
    }
}
