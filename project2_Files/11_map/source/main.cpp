#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef struct node {
    int mid;  // 중간고사 점수
    int fin;  // 기말고사 점수
} STUD;

void print_map(map<string, STUD> student);

int main() {
    map<string, STUD> student;
    int n;

    cout << "최대 학생 수 : ";
    cin >> n;

    cin.ignore(); // 입력 버퍼 비우기
    int count = 0;

    while (count < n) {
        string name;
        STUD curr_stud;

        if (!(cin >> name >> curr_stud.mid >> curr_stud.fin)) {
            break; // EOF시 종료
        }

        cout << "\"" << name << "\"님이 ";

        if (student.find(name) == student.end()) {
            cout << "추가 되었습니다." << endl;
            student.insert({name, curr_stud});
            count++;
        } else {
            cout << "이미 존재합니다." << endl;
        }
    }

    print_map(student);
    return 0;
}

void print_map(map<string, STUD> student) {
    for (const auto &node : student) {
        cout << "이름 : " << node.first 
             << ", 중간고사 점수 : " << node.second.mid 
             << ", 기말고사 점수 : " << node.second.fin
             << endl;
    }
}
