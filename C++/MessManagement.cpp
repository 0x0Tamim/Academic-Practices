#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store individual member data
struct Member {
    string name;
    double marketExpense; // Total expense by the member
    int meals;            // Total meals taken by the member
    double rent;          // Individual house rent
};

int main() {
    int numMembers, totalDays;
    double totalMarketExpense = 0.0, totalMeals = 0.0;

    // Input number of members
    cout << "Enter the number of members: ";
    cin >> numMembers;

    // Vector to store member data
    vector<Member> members(numMembers);

    // Input details for each member
    for (int i = 0; i < numMembers; ++i) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> members[i].name;
        cout << "Enter market expense by " << members[i].name << ": ";
        cin >> members[i].marketExpense;
        cout << "Enter number of meals taken by " << members[i].name << ": ";
        cin >> members[i].meals;
        cout << "Enter house rent for " << members[i].name << ": ";
        cin >> members[i].rent;

        // Calculate totals
        totalMarketExpense += members[i].marketExpense;
        totalMeals += members[i].meals;
    }

    // Input number of days in the month
    cout << "Enter the total number of days in this month: ";
    cin >> totalDays;

    // Input shared expenses
    double gasBill, maidBill, electricityBill, garbageBill, wifiBill;
    cout << "Enter total gas bill: ";
    cin >> gasBill;
    cout << "Enter total maid bill: ";
    cin >> maidBill;
    cout << "Enter total electricity bill: ";
    cin >> electricityBill;
    cout << "Enter total garbage bill: ";
    cin >> garbageBill;
    cout << "Enter total wifi bill: ";
    cin >> wifiBill;

    // Identify members with rent = 0
    int zeroRentMembers = 0;
    for (const auto& member : members) {
        if (member.rent == 0) {
            zeroRentMembers++;
        }
    }

    // Calculate shared expenses
    double sharedForAll = (electricityBill + garbageBill + wifiBill) / numMembers; // Shared among all
    double electricityPerMember = electricityBill / numMembers;
    double garbagePerMember = garbageBill / numMembers;
    double wifiPerMember = wifiBill / numMembers;
    double gasAndMaidPerMember = (gasBill + maidBill) / (numMembers - zeroRentMembers); // Shared among non-zero rent members

    // Calculate cost per meal
    double costPerMeal = totalMarketExpense / totalMeals;

    // Display summary
    cout << "\n--- Meal and Expense Management Summary ---\n";
    cout << "Total Market Expense: " << totalMarketExpense << "\n"; // Total market expense
    cout << "Total Meals: " << totalMeals << "\n";                  // Total meals
    cout << "Meal Rate (Cost Per Meal): " << costPerMeal << "\n";   // Meal rate
    cout << "Shared Expense (Gas + Maid) Per Member (Non-Rent Members Excluded): "
         << gasAndMaidPerMember << "\n";
    cout << "Shared Expense (Electricity) Per Member: " << electricityPerMember << "\n";
    cout << "Shared Expense (Garbage) Per Member: " << garbagePerMember << "\n";
    cout << "Shared Expense (WiFi) Per Member: " << wifiPerMember << "\n";
    cout << "--------------------------------------------\n\n";

    // Calculate and display final balance for each member
    for (const auto& member : members) {
        double mealCost = member.meals * costPerMeal; // Meal cost for the member
        double totalSharedExpense = sharedForAll;    // Base shared expense
        if (member.rent > 0) {
            totalSharedExpense += gasAndMaidPerMember; // Add gas and maid if rent > 0
        }
        double totalExpense = mealCost + totalSharedExpense + member.rent; // Total cost
        double balance = member.marketExpense - totalExpense; // Final balance

        cout << "Member: " << member.name << "\n";
        cout << "  Market Expense: " << member.marketExpense << "\n";
        cout << "  Meals Taken: " << member.meals << "\n";
        cout << "  Meal Cost: " << mealCost << "\n";
        cout << "  Rent: " << member.rent << "\n";
        cout << "  Shared Expense: " << totalSharedExpense << "\n";
        cout << "  - Electricity Bill Share: " << electricityPerMember << "\n";
        cout << "  - Garbage Bill Share: " << garbagePerMember << "\n";
        cout << "  - WiFi Bill Share: " << wifiPerMember << "\n";
        cout << "  Total Expense: " << totalExpense << "\n";
        if (balance >= 0) {
            cout << "  Balance (To Receive): " << balance << "\n";
        } else {
            cout << "  Balance (To Pay): " << -balance << "\n";
        }
        cout << "--------------------------------------------\n";
    }

    return 0;
}
