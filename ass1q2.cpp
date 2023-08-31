#include <iostream>
#include <fstream>

using namespace std;

double calculate_adjusted_amount(double investment_amount, int years, double interest_rate, double inflation_rate) {
    for (int year = 0; year < years; ++year) {
        double interest_earned = investment_amount * interest_rate / 100;
        double inflation_adjustment = investment_amount * inflation_rate / 100;
        investment_amount += interest_earned - inflation_adjustment;
    }
    return investment_amount;
}

int main() {
    ifstream file("spain_data.csv");
    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    double investment_amount, interest_rate, inflation_rate;
    int investment_year, target_year;

    cout << "Enter the investment amount: ";
    cin >> investment_amount;
    cout << "Enter the year of investment: ";
    cin >> investment_year;
    cout << "Enter the target year for estimation: ";
    cin >> target_year;

    for (int year = 1960; year <= target_year; ++year) {
        if (year >= investment_year) {
            file >> interest_rate >> inflation_rate;
        } else {
            char c;
            while (file.get(c) && c != '\n');
        }
    }

    file.close();

    int years = target_year - investment_year;
    double adjusted_amount = calculate_adjusted_amount(investment_amount, years, interest_rate, inflation_rate);
    cout << "Money actually received in " << target_year << ": " << adjusted_amount << " Euros" << endl;

    double adjusted_amount_in_investment_year = calculate_adjusted_amount(adjusted_amount, investment_year - target_year, interest_rate, inflation_rate);
    cout << "Value of money in " << investment_year << " (after adjusting for interest and inflation): " << adjusted_amount_in_investment_year << " Euros" << endl;

    // Comparison between dictatorial and monarchical eras
    double dictatorial_era_amount = calculate_adjusted_amount(investment_amount, 1975 - investment_year, interest_rate, inflation_rate);
    double monarchical_era_amount = calculate_adjusted_amount(investment_amount, 2023 - 1975, interest_rate, inflation_rate);

    if (dictatorial_era_amount > monarchical_era_amount) {
        cout << "Money grew faster during the dictatorial era." << endl;
    } else {
        cout << "Money grew faster during the monarchical era." << endl;
    }

    return 0;
}
