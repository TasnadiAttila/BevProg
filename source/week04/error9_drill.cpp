#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        //a c-nek is string-nek kell lenni és az if utasításba vizsgáljuk hogy az abc-ben
        //melyik hol helyezkedik el egymáshoz képest

        //Javított
        string s = "ape"; 
        string c = "fool"; 
        if (c > s) 
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