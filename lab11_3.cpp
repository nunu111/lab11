//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    ifstream source;
    source.open ("score.txt");

    double amount_of_number,Mean,deviation;
    string number;
    while(getline(source,number))
    {       
        amount_of_number++;
        Mean = Mean+ stof(number.c_str());
        deviation = deviation+ pow(stof(number.c_str()),2);
    } 

    Mean = Mean/amount_of_number;
    deviation= deviation/amount_of_number;
    deviation = deviation-pow(Mean,2);
    deviation = sqrt(deviation);

    cout << "Number of data = "<< amount_of_number << endl;
    cout << setprecision(3);
    cout << "Mean = "<< Mean <<endl;
    cout << "Standard deviation = "<< deviation;
}