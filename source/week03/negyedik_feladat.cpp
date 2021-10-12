#include "std_lib_facilities.h"

bool units(string unit){//vizsgálja hogy a unit a megengedett mértékegységek egyikkével egyezik e
    return (unit == "cm" || unit == "m" || unit == "in" || unit == "ft");
} //true-val tér vissza alapértelmezettként

double atvalto(double bevitt_szam, string unit){
    if(units(unit)==true){
        if(unit == "cm"){
           return bevitt_szam*0.01;
        }
        else if(unit == "in"){
           return bevitt_szam*2.54*0.01;
        }
        else if(unit == "ft"){
           return bevitt_szam*12*2.54*0.01;
        } 
        else if(unit == "m"){
            return bevitt_szam*1;
        }
    }
    return 0;
}



int main()
{ 
    
    //negyedik feladat
    
    double egyik_szam = 0; //itt változik int doublere
    double masik_szam = 0; //itt változik int doublere 
    while (cin >> egyik_szam >> masik_szam){ 
        if(egyik_szam < masik_szam){
            cout << "The smaller value is: " << egyik_szam << endl;
            cout << "The larger value is: " << masik_szam << endl;
        }
        else if(egyik_szam == masik_szam){ //megvizsgálja hogy egyenlőek e
            cout << "The numbers are equal" << endl;
        }
        else{
            cout << "The smaller value is: " << masik_szam << endl;
            cout << "The larger value is: " << egyik_szam << endl;
        }
    }

    return 0;
}