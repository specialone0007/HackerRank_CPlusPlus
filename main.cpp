#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

/* Say "Hello, World!" With C++ */
void HelloWorld() {
	cout << "Hello, World!" << endl;
}

/* Input and Output */
void InputOutput() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c << endl;

}

/* Basic Data Types */
void BasicDataTypes() {
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl;
}

/* Conditional Statements */
void ConditionalStatements(int n) {
    string numbers[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n <= 9) {
        cout << numbers[n - 1] << endl;
    }
    else if (n > 9) {
        cout << "Greater than 9" << endl;
    }
}

/* For Loop */
void ForLoop() {
    string numbers[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << numbers[i - 1] << endl;
        }
        else if (i > 9) {
            if (i%2 == 0)
            {
                cout << "even" << endl;
            }
            else {
                cout << "odd" << endl;
            }
        }
    }
}

/* Functions */
int max_of_four(int a, int b, int c, int d) {
    int maximum = a;

    if (b > maximum) {
        maximum = b;
    }

    if (c > maximum) {
        maximum = c;
    }

    if (d > maximum) {
        maximum = d;
    }

    return maximum;
}

/* Pointer */
void update(int* a, int* b) {
    int sum, absDiff;
    
    sum = *a + *b;
    absDiff = abs(*a - *b);

    *a = sum;
    *b = absDiff;
}

/* Arrays Introduction */
void ArraysIntroduction() {
    int n;
    cin >> n;

    int * arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

/* Variable Sized Arrays */
void VariableSizedArrays() {
    vector<vector <int>> arrays;

    int n, q, arrSize, val;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        vector<int> newVector;
        arrays.push_back(newVector);
        cin >> arrSize;
        
        for (int j = 0; j < arrSize; j++) {
            cin >> val;
            arrays[i].push_back(val); /* Important Thing I learnt: 
                                      Push_Back is copy by value not reference therefore; 
                                      I cannot use newVector.push_back(val) 
                                      instead of arrays[i].push_back(val)*/
        }
    }

    int x, y;

    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << arrays[x][y] << endl;
    }
}

/* Strings */
void Strings() {
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    cout << b[0] + a.substr(1) << " ";
    cout << a[0] + b.substr(1) << endl;
}

/* StringStream */
vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> ints;
    int input;
    char ch;
    while (ss >> input) {
        ints.push_back(input);
        ss >> ch;
    }
    return ints;
}

/* Struct */
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

/* Class */
class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int age) {
            this->age = age;
        }

        void set_first_name(string first_name) {
            this->first_name = first_name;
        }

        void set_last_name(string last_name) {
            this->last_name = last_name;
        }

        void set_standard(int standard) {
            this->standard = standard;
        }

        int get_age() {
            return age;
        }

        string get_first_name() {
            return first_name;
        }

        string get_last_name() {
            return last_name;
        }

        int get_standard() {
            return standard;
        }

        string to_string() {
            return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
        }
};

/* Classes and Objects */
class Student {
    private:
        vector<int> scores = vector<int>(5);
    public:
        void input() {
            for (int i = 0; i < 5; i++) {
                cin >> scores[i];
            }
        }

        int calculateTotalScore() {
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                sum += scores[i];
            }

            return sum;
        }
};

/* Vector-Sort */
void VectorSort() {
    vector<int> v;
    int size, input;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}

/* Vector-Erase */


int main() {
	return 0;
}