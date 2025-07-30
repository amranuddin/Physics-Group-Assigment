#include <bits/stdc++.h>

using namespace std;

int main()
{
    float thita;
    
    cout<<"Enter angle in degrees: ";
    
    cin >> thita;

    float pi=3.1416;
    
    float tr = thita * pi / 180;

   
    float ratio = 1 / sin(tr);

    cout << "The ratio of slit width to wavelength is: "<<ratio;


}
