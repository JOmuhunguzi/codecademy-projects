#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

//creating a program to solve a quadratic equation!

void equation(int &a, int &b, int &c);   //declaring the different functions to use
double calculations(int a,int b, int c);   
void formula(int a, int b, int c);  

int main(){
    int a,b,c;
    //call the functions
    equation(a,b,c);
    double answer;
    answer=calculations(a,b,c);
    cout <<"The value of x is/are: " <<answer <<endl;
    formula();

return 0;
}

//defining the function equation
void equation(int &a, int &b, int &c){
    struct input_values {                    
        int a,b,c;
    };

    const string quadratic_form ="ax +bx +c =0 ";
    cout <<" The quadratic equation to solve must be in the form "<<quadratic_form <<endl; 
    cout <<"Type the quadratic equation to solve" <<endl;    /*prompting the user to enter the 
    equation to be solved in the standard quadratic format*/

    cout <<"Enter the values of a,b and c from the above equation, a= " 
            <<"," <<"b= "<<","<<"c= "<<"," <<endl;
            
    cin >>a;
    cin >>b;
    cin >>c;

}
    /*a conditional statement to check if the formula typed in
    matches the inbuilt formula*/


double calculations (int a, int b, int c){
    //putting the input values in the formula
   double discrimnat = b*b - 4*a*c;
   if (discrimnat < 0){
    cout <<"No real roots" <<endl;
    
    return 0;
   }
   else if(discrimnat ==0){
    cout <<"Imaginary roots, showing results of one value " <<endl;

    return -b /(2.0*a);
   }
   else{
    double root1 =(-b + sqrt(discrimnat)/(2.0*a));
    double root2 =(-b - sqrt(discrimnat)/(2.0 *a));

    return root1 ==root2 ? root1 : root1 +root2 ;
   }

}
/*a funntion that contains the formula and allows the program to 
put in the input values to generate the answer*/

//defining the calculations formula 
void formula(){
        string formula = "x = -b +/-(sqrt(b2 -4ac)/2a)"; //using pointers to feed values to the formula and generate the answer
        string* ptr =&formula;
        cout <<*ptr <<endl;
    }     


