#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()
{
int d;
cout << "Zavie Ra Vared Konid : " << endl;
cin >> d;
double y = (M_PI / 180)*d;
cout << "tan(" << d << ") = " << tan(y) << endl;
getchar();
return 0;
}