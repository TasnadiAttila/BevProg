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
    //első feladat
    
    int egyik_szam = 0;
    int masik_szam = 0;
    while (cin >> egyik_szam >> masik_szam){ //beolvassuk a két számot a változókba
       cout << egyik_szam  << " " << masik_szam  << endl; //kiíratjuka két számot
       if(egyik_szam  == '|'){ //ha | jel van megszíktja a ciklust de más jelek esetén is megszakad ami nem egész szám pl &
           break;
       }
    }
  
    return 0;
}
