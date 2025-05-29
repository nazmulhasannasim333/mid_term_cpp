#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[105];
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int max_marks = -1;
        Student top_student;

        for (int j = 0; j < 3; j++)
        {
            Student student;
            cin >> student.id >> student.name >> student.section >> student.marks;

            if (student.marks > max_marks)
            {
                max_marks = student.marks;
                top_student = student;
            }
        }

        cout << top_student.id << " " << top_student.name << " " << top_student.section << " " << top_student.marks << endl;
    }
    return 0;
}