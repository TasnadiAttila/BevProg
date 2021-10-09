#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //string s = "ape"; if (s=="fool") cout < "Success!\n";
        //a vizsgálatbna nem == hanem != és a cout-nál hiányzik egy <-jel

        //Javított
        string s = "ape"; 
        if (s!="fool") 
        cout << "Success!\n";

        keep_window_open();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
    return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
    return 2;
}