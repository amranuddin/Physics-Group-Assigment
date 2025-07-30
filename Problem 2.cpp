#include <bits/stdc++.h>

using namespace std;

int main()
{
    double thita;
    
    cout<<"Enter angle in degrees: ";
    
    cin >> thita;

    float pi=3.1416;
    
    double tr = thita * pi / 180;

   
    double ratio = 1 / sin(tr);

    cout << "The ratio of slit width to wavelength is: "<<ratio;


}




