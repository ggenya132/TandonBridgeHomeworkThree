#include <iostream>
#include <string>
using namespace std;

int main()
{
    double priceFirstItem, priceSecondItem, taxRate, priceDiscount;
    string customerHasClubCardAnswer;
    bool hasClubCard;

    cout << "Enter	price of first item: ";
    cin >> priceFirstItem;
    cout << endl;
    cout << "Enter price of second	item: ";
    cin >> priceSecondItem;
    cout << endl;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> customerHasClubCardAnswer;
    cout << endl;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;
    cout << endl;

    hasClubCard = customerHasClubCardAnswer == "y" || "Y" || "yes" || "Yes" ? true : false;
    priceDiscount = hasClubCard ? .9 : 1;

    double totalBasePrice = priceFirstItem + priceSecondItem;

    if (priceFirstItem <= priceSecondItem)
    {
        priceFirstItem = priceFirstItem * .5;
    }
    else
    {
        priceSecondItem = priceSecondItem * .5;
    }

    double totalPriceWithDiscounts = (priceFirstItem + priceSecondItem) * priceDiscount;
    double priceWithTax = totalPriceWithDiscounts * (1 + (taxRate / 100));

    cout << "Base price: " << totalBasePrice << endl;
    cout << "Price after discounts: " << totalPriceWithDiscounts << endl;
    cout << "Total price: " << priceWithTax << endl;

    return 0;
}