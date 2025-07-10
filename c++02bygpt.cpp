#include <iostream>
using namespace std;

int main() {
    cout << "Let's calculate your percentage!" << endl;

    // Declare variables for marks
    float M, s, e, sa, guj, ss, co;

    // Input section
    cout << "Give me your MATHS marks: ";
    cin >> M;
    
    cout << "Give me your SCIENCE marks: ";
    cin >> s;
    
    cout << "Give me your ENGLISH marks: ";
    cin >> e;
    
    cout << "Give me your SANSKRIT marks: ";
    cin >> sa;
    
    cout << "Give me your GUJARATI marks: ";
    cin >> guj;
    
    cout << "Give me your SOCIAL SCIENCE marks: ";
    cin >> ss;
    
    cout << "Give me your COMPUTER marks: ";
    cin >> co;

    // Calculate total and percentage
    float totalObtained = M + s + e + sa + guj + ss + co;
    float totalMarks = 700;  // Assuming each subject is out of 100
    float percentage = (totalObtained / totalMarks) * 100;

    // Output results
    cout << "\nTotal Marks Obtained: " << totalObtained << " out of " << totalMarks << endl;
    cout << "Your Percentage: " << percentage << "%" << endl;

    return 0;
}