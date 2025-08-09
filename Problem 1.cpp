#include <bits/stdc++.h>
using namespace std;

void mthorder (float lem)
{
     float thita,d;
    cout <<"Enter value of angle (in degrees): ";
    cin >>thita;

    cout <<"Enter slit separation d (in µm): ";
    cin>>d;

    double tr=thita*3.1416 /180;
    
    double dnm = d*1000; 

    int m=floor( (dnm*sin(tr) ) / lem);

    cout <<"The final answer: "<<m<<"-th order maxima.";

    }


int main()
{
    float lemda; 

    cout << "Enter value of wavelength (in nm): ";
    cin >> lemda;

    if (lemda <380|| lemda >750) 
    {
        cout <<"Out of the range. Please enter a valid number."<< endl;
        
        return 0;
    }
    else
    {
        mthorder(lemda);
        
    }
    
}
