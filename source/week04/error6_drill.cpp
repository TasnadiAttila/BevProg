#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        //v(5) = 7; if (v(5)!=7) az 5-nek []-be kell lenni és == lesz a != helyett

        //Javított
        vector<int> v(10); 
        v[5] = 7; 
        if (v[5]==7) 
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