
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "==============================" << endl;
    cout << "      My Programming Skills    " << endl;
    cout << "==============================" << endl;

    // Create a list of skills
    vector<string> programmingSkills = {
        "C++", "C#", "C", "Java",
        "HTML", "CSS", "PHP", "JavaScript", "jQuery"
    };

    // Display skills
    cout << "I have experience in the following languages and technologies:" << endl;
    for(size_t i = 0; i < programmingSkills.size(); i++) {
        cout << i + 1 << ". " << programmingSkills[i] << endl;
    }

    cout << "\nI am constantly learning and improving my skills in software development and web development." << endl;
    cout << "==============================" << endl;

    return 0;
}
