#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string studentID;
    string studentName;
    double OOP2_Score;
    double Math_Score;
    double English_Score;

public:
    void setStudent_ID(string ID) { studentID = ID; }
    string getStudent_ID() { return studentID; }
    void setStudent_Name(string Name) { studentName = Name; }
    string getStudent_Name() { return studentName; }
    void setOOP2_Score(double OOP2Score) { OOP2_Score = OOP2Score; }
    double getOOP2_Score() { return OOP2_Score; }
    void setMath_Score(double MathScore) { Math_Score = MathScore; }
    double getMath_Score() { return Math_Score; }
    void setEnglish_Score(double EnglishScore) { English_Score = EnglishScore; }
    double getEnglish_Score() { return English_Score; }
    double getAverage_Score() { return (OOP2_Score + Math_Score + English_Score) / 3; }
    double getTotal_Score() { return OOP2_Score + Math_Score + English_Score; }
};

int main()
{
    string name, ID;
    double OOP2_score, math_score, english_score;
    cout << "Enter the student name: ";
    cin >> name;
    cout << "Enter the student ID: ";
    cin >> ID;
    cout << "Enter the OOP2 score: ";
    cin >> OOP2_score;
    cout << "Enter the MATH score: ";
    cin >> math_score;
    cout << "Enter the ENGLISH score: ";
    cin >> english_score;

    Student student;
    student.setStudent_Name(name);
    student.setStudent_ID(ID);
    student.setOOP2_Score(OOP2_score);
    student.setMath_Score(math_score);
    student.setEnglish_Score(english_score);

    cout << "\nStudent INFO: " << endl;
    cout << "Student name: " << student.getStudent_Name() << endl;
    cout << "Student ID: " << student.getStudent_ID() << endl;
    cout << "OOP2 score: " << student.getOOP2_Score() << endl;
    cout << "MATH score: " << student.getMath_Score() << endl;
    cout << "ENGLISH score: " << student.getEnglish_Score() << endl;
    cout << "Average score: " << student.getAverage_Score() << endl;
    cout << "Total score: " << student.getTotal_Score() << endl;

    return 0;
}