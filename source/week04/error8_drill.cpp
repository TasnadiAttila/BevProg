#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        //vagy c = true vagy a cout kiíratásokat fel kell cserélni a két ágban

        //Javított
        bool c = true; 
        if (c) 
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