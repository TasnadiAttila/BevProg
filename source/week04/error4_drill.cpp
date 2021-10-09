#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //cout << success << '\n';
        //a success szót idézőjelbe kell tenni
        
        //Javított
        cout << "success" << '\n';

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