#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        //a feltételben 9 lesz

        //Javított
        string s = "Success!\n"; 
        for (int i=0; i<9; ++i) 
            cout << s[i];

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