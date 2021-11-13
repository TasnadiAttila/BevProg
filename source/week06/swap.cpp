#include "std_lib_facilities.h"

int swap_v(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

int swap_r(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    return 0;
}

/* fordítónak nem tetszik 
int swap_cr(const int& a, const int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/

int main()
{

    int x = 7;
	int y = 9;
	cout << "x: " << x << " y: " << y << endl;
	swap_v(x,y);
	cout << "swap_v " << "x: " << x << " y: " << y << endl;
    swap_v(7,9);
    cout << "swap_v " << "x: " << x << " y: " << y << endl;
    //nem változott semmi

    //mivel const ezért nem tudjuk változtatni
    /*
    const int cx = 7;
    const int cy = 9;
    cout << "cx: " << x << " cy: " << y << endl;
    swap_r(cx,cy);
    cout << "swap_r cx: " << x << " cy: " << y << endl;
    */
    //swap_r(7.7,9.9); //fent a function int-re lett létrehozva
    //cout << "swap_r cx: " << x << " cy: " << y << endl;

    /*
    double dx = 7.7;
    double dy = 9.9;
    swap_cr(dx,dy);
    cout << "swap_cr dx: " << x << " dy: " << y << endl;
    swap_cr(7.7,9.9)
    cout << "swap_cr dx: " << x << " dy: " << y << endl;
    */

    return 0;
}