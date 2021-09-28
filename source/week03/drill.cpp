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
}



int main()
{ 
    //az összes feladat 1 nagy kommentben van
    /*
    //első feladat
    
    int egyik_szam = 0;
    int masik_szam = 0;
    while (cin >> egyik_szam >> masik_szam){ //beolvassuk a két számot a változókba
       cout << egyik_szam  << " " << masik_szam  << endl; //kiíratjuka két számot
       if(egyik_szam  == '|'){ //ha | jel van megszíktja a ciklust de más jelek esetén is megszakad ami nem egész szám pl &
           break;
       }
    }

    //masodik feladat
    
    int egyik_szam = 0;
    int masik_szam = 0;
    while (cin >> egyik_szam >> masik_szam){ 
       if(egyik_szam < masik_szam){ //eldönti hogy melyik szám a nagyobb
           cout << "The smaller value is: " << egyik_szam << endl;
           cout << "The larger value is: " << masik_szam << endl;
       }
       else{
           cout << "The smaller value is: " << masik_szam << endl;
           cout << "The larger value is: " << egyik_szam << endl;
       }
    }
    
    //harmadik feladat
    
    int egyik_szam = 0;
    int masik_szam = 0;
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
    */
    //hatodik feladat

    double bekert_szam = 0; //valtozo a bekert szamnak
    double legnagyobb_eddig = 0;  //valtozo a legnagyobb szamnak
    double legkisebb_eddig = 0;   //valtozo a legkisebb szamnak
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