#include <iostream>
#include <iomanip>

using namespace std;

const int LENGTH=10;

    struct Fuel
    {
        int pumpNo;
        char fuelType[LENGTH];
        double pricePerLitre;
    };

void  displayData( Fuel *info);

int main()
{
    Fuel pump;

    cout<<"Enter pump number "<<setw(10)<<": ";
    cin >>pump.pumpNo;

    cout<<"Enter fuel type "<<setw(12)<<": ";
    cin.ignore();
    cin.getline(pump.fuelType,LENGTH);

    cout<<"Enter Price per litre "<<setw(9)<<": RM ";
    cin>>pump.pricePerLitre;

    cout<<endl;

    displayData( &pump);


    return 0;
}
void  displayData( Fuel *info)
{
    cout<<":::::::::Fuel Details::::::::\n"<<endl;

    cout<<"Pump Number "<<setw(6)<<": "<<(*info).pumpNo<<endl;
    cout<<"Fuel Type "<<setw(8)<<": "<<(*info).fuelType<<endl;
    cout<<"Price per litre "<<setw(2)<<": "<<(*info).pricePerLitre<<endl;
}

