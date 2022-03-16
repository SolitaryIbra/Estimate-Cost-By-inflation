#include <iostream>


using namespace  std;
int main()
{
    int num_of_years;
    float inflation_rate, estimate_cost, base_cost;

    cout<< "Enter The Cost Of the Item: ";
    cin >> base_cost;
    estimate_cost = base_cost;

    cout<< "Enter The Number of Years From Now:  ";
    cin >> num_of_years;

    cout<< "Enter The Rate Of Inflation: ";
    cin >> inflation_rate;
    inflation_rate = inflation_rate /100;

    int i =2021 ;
    while(true)
        {
            estimate_cost = estimate_cost + inflation_rate;
            if (i == 2021 + num_of_years)break;
            else i++;
        }
    cout << "The Estimate Cost Of The Product after "<< num_of_years <<" Years is " << estimate_cost;
}