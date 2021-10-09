#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        //nem kell a then a szintaktika miatt 

        //Javított
        if (true)
            cout << "Success!\n"; 
        else 
            cout << "Fail!\n";




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