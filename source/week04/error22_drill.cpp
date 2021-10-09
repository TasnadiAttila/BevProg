#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        //nem kell a <char> és nem <= hanem csak < a for-ban

        //Javított
        string s = "Success!\n"; 
            for (int i=0; i<10; ++i) 
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