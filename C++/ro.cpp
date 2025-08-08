#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ফাংশন ডিক্লারেশন
vector<string> findMeetingDays(vector<string> myDays, vector<string> friendDays);

int main() {
    vector<string> myDays = {"রবি", "সোম", "মঙ্গল", "বুধ", "বৃহস্পতি", "শুক্র"};
    vector<string> friendDays = {"রবি", "সোম", "মঙ্গল", "বুধ", "বৃহস্পতি", "শুক্র"};

    vector<string> meetingDays = findMeetingDays(myDays, friendDays);

    if (meetingDays.empty()) {
        cout << "দুঃখিত, আমরা কোনো সময়ে দেখা করতে পারব না" << endl;
    } else {
        cout << "আমরা দেখা করতে পারব নিম্নলিখিত দিনেগুলোতে: ";
        for (const string& day : meetingDays) {
            cout << day << " ";
        }
        cout << endl;
    }

    return 0;
}

// ফাংশন ডেফিনিশন
vector<string> findMeetingDays(vector<string> myDays, vector<string> friendDays) {
    vector<string> commonDays;

    for (const string& day : myDays) {
        for (const string& friendDay : friendDays) {
            if (day == friendDay) {
                commonDays.push_back(day);
                break;
            }
        }
    }

    return commonDays;
}

