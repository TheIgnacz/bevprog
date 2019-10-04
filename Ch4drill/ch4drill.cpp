#include <iostream>

using namespace std;

int main()
{
    //1.-5.
    
    /*double a = 0;
    double b = 0;
    
    while(cin >> a >> b){
        if ( a == b){
            cout << "The numbets are equal." << endl;
        }
        
        else if (a - b < (1.0/100)){
            cout << "The numbers are almost equal." << endl;
        }
        else{
            cout << "The smaller value is: " << (a < b ? a : b) << " The larger value is: " << (a > b ? a : b) << endl;
        }
    }*/
    
    //6.
    double a = 0;
    double min;
    double max;
    cin >> a;
    min = a;
    
    int tmp = 0;
    string raw;
    int sum = 0;
    while(cin >> a >> raw && a != 0){
        if (a < min){
            min = a;
            cout << "The smallest so far." << endl;
        }
        else if( a > max) {
            max = a;
            cout << "The largest so far." << endl;
        }
        
        switch (raw) {
            case "m": sum += a; break;
            case "cm": sum += (a*0.01);break;
            case "in": sum += (a*0.0254);break;
            case "ft": sum += (a*0.3048 );break;
            default: cout << "Wrong unit. " << endl;
        }
        cout << "Összeg: " << sum << " m." << endl; 
        tmp = a;
    }

    
    
    
    
    
    return 0;
}