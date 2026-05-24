// income tax calculator
// income < 5,00,000 then 0% tax
// income 5L - 10L => 20% tax
// income above 10L => 30% tax

#include <iostream>
using namespace std;

int tax_calculator(int income)
{
    cout << "enter your income: ";
    cin >> income;

    if (income <= 500000)
    {
        cout << "zero tax on your income";
    }
    else if (income > 500000 && income < 1000000)
    {
        cout << "20% tax on your income" << "\n total tax become: " << 0.2 * income;
    }
    else
    {
        cout << "30% tax on your income" << "\n total tax become: " << 0.3 * income;
    }
}

int main()
{

    int income;
    tax_calculator(income);

    return 0;
}
