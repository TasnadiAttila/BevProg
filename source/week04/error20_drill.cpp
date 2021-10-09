#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        //kell a while-nak egy {} és nem ++j hanem azt i-t kell növleni i = i+1-el
        //a while blokk részében
        
        //Javított
        int i=0; 
        int j = 9; 
        while (i<10){
            i = i + 1;
            if (j<i) 
                cout << "Success!\n";
        }

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