#include "std_lib_facilities.h"
int main()
    try {
        //Eredeti
        //int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
        //az x 2-nél nagyobb pozitív int, és az if feltételben != kell

        //Javított

        int x = 3; 
        double d = 5/(x-2); 
            if (d!=2*x+0.5) 
                cout <<"Success!\n";


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