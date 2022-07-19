/*Suppose you have a list of students and their marks in three subjects
You have to create a Rank list based upon their total marks
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calTol(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}
bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calTol(m1) > calTol(m2);
}
int main()
{
    vector<pair<string, vector<int>>> students_marks = {
        {"Raghav", {77, 55, 87}},
        {"Amit", {44, 92, 61}},
        {"Sumit", {66, 55, 99}},
        {"Arun", {88, 53, 47}},
    };
    sort(students_marks.begin(), students_marks.end(), compare);
    cout << "Rank List is :-" << endl;
    for (auto s : students_marks)
    {
        cout << s.first << " " << calTol(s.second) << endl;
    }
}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int marks(vector<int> m)
{
  return m[0]+m[1]+m[2];
}
bool compare(pair<string,vector<int>>s1,pair<string,vector<int>>s2)
{
  vector<int> m1 = s1.second;
  vector<int> m2 = s2.second;
  return marks(m1)>marks(m2);
}
int main()
{
  vector<pair<string,vector<int>>> student = {
    {"Rohan",{74,65,58}},
    {"Amit",{64,75,78}},
    {"Suren",{79,57,88}},
    {"Raghav",{80,71,66}}};
    
    sort(student.begin(),student.end(),compare);
    
    for(auto x: student)
    {
      cout<<x.first<<"---"<<marks(x.second);
      cout<<endl;
    }
  return 0;
}