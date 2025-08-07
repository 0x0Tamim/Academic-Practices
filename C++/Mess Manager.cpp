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

    // Calculate shared expenses
    double electricityPerMember = electricityBill / numMembers;
    double garbagePerMember = garbageBill / numMembers;
    double wifiPerMember = wifiBill / numMembers;
    double gasPerMember = gasBill / numMembers;
    double maidPerMember = maidBill / numMembers;
    double totalSharedPerMember = electricityPerMember + garbagePerMember + wifiPerMember + gasPerMember + maidPerMember;

    // Calculate cost per meal
    double costPerMeal = totalMarketExpense / totalMeals;

    // Display summary
    cout << "\n--- Meal and Expense Management Summary ---\n";
    cout << "Total Market Expense: " << totalMarketExpense << "\n";
    cout << "Total Meals: " << totalMeals << "\n";
    cout << "Meal Rate (Cost Per Meal): " << costPerMeal << "\n";
    cout << "Shared Expense (Per Member): " << totalSharedPerMember << "\n";
    cout << "  - Electricity Bill Share: " << electricityPerMember << "\n";
    cout << "  - Garbage Bill Share: " << garbagePerMember << "\n";
    cout << "  - WiFi Bill Share: " << wifiPerMember << "\n";
    cout << "  - Gas Bill Share: " << gasPerMember << "\n";
    cout << "  - Maid Bill Share: " << maidPerMember << "\n";
    cout << "--------------------------------------------\n\n";

    double totalToPay = 0.0;
    // Calculate and display final balance for each member
    for (const auto& member : members) {
        double mealCost = member.meals * costPerMeal; // Meal cost for the member
        double totalExpense = mealCost + totalSharedPerMember + member.rent; // Total cost
        double balance = member.marketExpense - totalExpense; // Final balance
        totalToPay += (balance < 0) ? -balance : 0;

        cout << "Member: " << member.name << "\n";
        cout << "  Market Expense: " << member.marketExpense << "\n";
        cout << "  Meals Taken: " << member.meals << "\n";
        cout << "  Meal Cost: " << mealCost << "\n";
        cout << "  Rent: " << member.rent << "\n";
        cout << "  Shared Expense: " << totalSharedPerMember << "\n";
        cout << "  Total Expense: " << totalExpense << "\n";
        if (balance >= 0) {
            cout << "  Balance (To Receive): " << balance << "\n";
        } else {
            cout << "  Balance (To Pay): " << -balance << "\n";
        }
        cout << "--------------------------------------------\n";
    }
    cout << "Total Amount to be Paid by All Members: " << totalToPay << "\n";
    return 0;
}

