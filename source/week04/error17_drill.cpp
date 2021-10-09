#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        //az int nem fér bele a char-ba ezért int lesz a c is vagy double vagy long vagy ami több biten képes tárolni

        //Javított
        int x = 2000; 
        int c = x; 
        if (c==2000) 
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