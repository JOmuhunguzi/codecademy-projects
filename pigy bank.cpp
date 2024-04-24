#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//declaring the fuctions
void currency(double &cur1, double &cur2, double &cur3);
void conversions (double cur1, double cur2, double cur3);

int main(){
    
    double cur1, cur2, cur3;
    //calling the functions
    currency(cur1, cur2, cur3);
    conversions(cur1, cur2, cur3);

return 0;
}

/*defining the function Currencies of colombia, peru and Brazil in south America
The names of the currencies are colombian pesos, Brazilian Reais, Peruvian soles*/

void currency(double  &cur1, double &cur2, double &cur3){
    cout <<"Enter the  of Colombian pesos: " <<endl;
    cin >>cur1;
    cout <<"Enter the number of Brazilian Reais: " <<endl;
    cin >>cur2;
    cout <<"Enter the number of Peruvian  soles: " <<endl;
    cin >>cur3;

}
/*using the function conversions to calculate the amount of the currencies
in USDs*/
/*The currencies are
 cur1= colombian pesos
cur2= Brazilian Reais
cur3= Peruvian soles*/

void conversions(double cur1, double cur2, double cur3){
    //Exchange rates of the currencies to USDs
    #define cop_buying  0.00026;
    #define Brl_buying 0.19;
    #define Pen_buying 0.27;

        double cop_usd;
        cop_usd =cur1 / cop_buying;
        double Brl_usd;
        Brl_usd = cur2 / Brl_buying;
        int pen_usd;
        pen_usd = cur3 / Pen_buying;
    
    cout <<"The currencies in USDs are: " <<endl;
    cout <<"The Pesos amount to: " <<cop_usd <<endl;
    cout <<"The Reais amount to: " <<Brl_usd <<endl;
    cout <<"The Soles amount to: " <<pen_usd <<endl;

    }
