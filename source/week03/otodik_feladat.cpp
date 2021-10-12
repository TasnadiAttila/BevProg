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
    //ötödik feladat
    double egyik_szam = 0; 
    double masik_szam = 0; 
    double difference = 0.01; //1/100 egy változóba tétele //nem feltétlen szükséges
    while (cin >> egyik_szam >> masik_szam){ 
        if(egyik_szam < masik_szam){
            cout << "The smaller value is: " << egyik_szam << endl;
            cout << "The larger value is: " << masik_szam << endl;
            if((egyik_szam-masik_szam)<difference){ //megvizsgáljuk, hogy ha nagyobb számból kivonjuk a kisebbet és ha a maradék kevesebb mint
                cout << "The numbers are almost equal" << endl;//a difference értéke akkor kiírja hogy majdnem egyformák
            }
        }
        else if(egyik_szam == masik_szam){ 
            cout << "The numbers are equal" << endl;
        }
        else{
            cout << "The smaller value is: " << masik_szam << endl;
            cout << "The larger value is: " << egyik_szam << endl;
            if((masik_szam-egyik_szam)<difference){//itt ugye megfordul a kivonandó számok mert a másik lesz a nagyobb
                cout << "The numbers are almost equal"  << endl;//megvizsgáljuk, hogy ha nagyobb számból kivonjuk a kisebbet és ha a maradék kevesebb
            }                                                    //mint a difference értéke akkor kiírja hogy majdnem egyformák
        }
    }

 
    return 0;
}