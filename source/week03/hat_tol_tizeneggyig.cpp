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
    //hatodik feladat

    double bekert_szam = 0; //valtozo a bekert szamnak
    double legnagyobb_eddig = -10000;  //valtozo a legnagyobb szamnak
    double legkisebb_eddig = 10000;   //valtozo a legkisebb szamnak
    string unit = " "; //üres unit
    double sum_of_values = 0;
    double number_of_values = 0;
    vector<double> vectorS;

    while(cin >> bekert_szam >> unit){  //szam bekeres
            if(units(unit)==true){
                sum_of_values += atvalto(bekert_szam, unit);
                number_of_values++;
                vectorS.push_back(atvalto(bekert_szam, unit));
                sort(vectorS);
            
            if(bekert_szam > legnagyobb_eddig){ //eldönti hogy a bekert_szam nagyobb e az inicializáltnál
                legnagyobb_eddig = bekert_szam; //áthelyezi a bekert_szam értéték a legnagyobb-ba 
            }
            if(bekert_szam < legkisebb_eddig){ //eldönti hogy a bekert_szam kisebb e mint az incializált 
                legkisebb_eddig = bekert_szam; //áthelyezi a bekert_szam értékét legkisebb valtozoba
            }
            cout << "The largest so far: " << legnagyobb_eddig << endl;
            cout << "The smallest so far: " << legkisebb_eddig << endl;
            cout << "The number of values: " << number_of_values << endl;
            cout << "The sum of values: " << sum_of_values << " m" << endl;
            cout << "Emelents of vector in increasing order: " << endl;
            for(double x:vectorS){
                cout << x << ", " << endl;
            }
        }
        
    }
    
    return 0;
}