#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <algorithm>
#include <set>
#include <map>
#include <stdexcept>
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
    string numbers[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

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
            if (i % 2 == 0)
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

    int* arr = new int[n];
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
struct Student1 {
    int age;
    string first_name;
    string last_name;
    int standard;
};

/* Class */
class Student2 {
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
class Student3 {
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
void VectorErase() {
    vector<int> v;
    int size, input;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> input;
        v.push_back(input);
    }

    int loc, x, y;
    cin >> loc >> x >> y;

    v.erase(v.begin() + loc - 1);
    v.erase(v.begin() + x - 1, v.begin() + y - 1);

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}

/* Overload Operators */
class Complex {

public:
    int a, b;

    void input(string s) {
        int pos = s.find("+");
        a = stoi(s.substr(0, pos));
        b = stoi(s.substr(pos + 2));
    }
};

Complex operator+(const Complex& left, const Complex& right) {
    Complex result;
    result.a = left.a + right.a;
    result.b = left.b + right.b;
    return result;
}

ostream& operator<<(ostream& Cout, const Complex& right) {
    Cout << right.a << "+i" << right.b;
    return Cout;
}

/* Print Pretty */
void PrintPretty(double A, double B, double C) {
    /* showbase: to add 0x */
    cout << std::hex << std::left << std::showbase << std::nouppercase;
    cout << (long long)(A) << endl;

    /* showpos: shows positive sign, fixed: shows as a number not in scientific format */
    cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);
    cout << B << endl;

    /* */
    cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);
    cout << C << endl;
}

/* Box It! */
class Box {
private:
    int l;
    int b;
    int h;
public:
    Box() {
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }

    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    int getLength() {
        return this->l;
    }

    int getBreadth() {
        return this->b;
    }

    int getHeight() {
        return this->h;
    }

    long long CalculateVolume() {
        return (long long)(l) * (long long)(b) * (long long)(h);
    }

    bool operator<(Box& right) {
        if (this->l < right.getLength()) {
            return true;
        }
        if (this->l == right.getLength() && this->b < right.getBreadth()) {
            return true;
        }
        if (this->l == right.getLength() && this->b == right.getBreadth() && this->h < right.getHeight()) {
            return true;
        }
        return false;
    }
};

ostream& operator<<(ostream& Cout, Box& right) {
    Cout << right.getLength() << " " << right.getBreadth() << " " << right.getHeight();
    return Cout;
}

/* Lower Bound-STL */
void LowerBoundSTL() { /* Instead of lower_bound, we can use binary research */
    vector<int> arr;
    int n, input, q;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        arr.push_back(input);
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> input;
        auto lower = lower_bound(arr.begin(), arr.end(), input);

        int index = lower - arr.begin();

        if (input == arr[index]) {
            cout << "Yes " << index + 1 << endl;
        }
        else {
            cout << "No " << index + 1 << endl;
        }

    }
}

/* Sets-STL */
void SetsSTL() {
    set<int>s;
    int size, type, value;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> type >> value;
        if (type == 1) {
            s.insert(value);
        }
        else if (type == 2) {
            if (s.find(value) != s.end()) {
                s.erase(value);
            }
        }
        else if (type == 3) {
            if (s.find(value) != s.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
}

/* Maps-STL */
void MapsSTL() {
    map<string, int>m;
    string key;
    int size, type, value;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> type >> key;
        if (type == 1) {
            cin >> value;
            if (m.find(key) != m.end()) {
                m[key] += value;
            }
            else {
                m.insert(make_pair(key, value));
            }
        }
        else if (type == 2) {
            if (m.find(key) != m.end()) {
                m.erase(key);
            }
        }
        else if (type == 3) {
            if (m.find(key) != m.end()) {
                cout << m[key] << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
}

/* C++ Class Templates */
struct optimiser {
    optimiser() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};
optimiser opt;

template <class T>
class AddElements {
private:
    T element;
public:

    AddElements(const T& right) {
        this->element = right;
    }

    T add(const T& right) {
        return this->element + right;
    }

    T concatenate(const T& right) {
        return this->element + right;
    }

};

/* Overloading Ostream Operator */
class Person {
public:
    Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
    const string& get_first_name() const {
        return first_name_;
    }
    const string& get_last_name() const {
        return last_name_;
    }
private:
    string first_name_;
    string last_name_;
};

ostream& operator<<(ostream& Cout, const Person& right) {
    Cout << "first_name=" << right.get_first_name() << ",last_name=" << right.get_last_name();
    return Cout;
}

/* Cpp exception handling */
int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1;
}

void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch (const invalid_argument& message) {
        cout << message.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}

/* Hotel Prices */
void hotel_prices() {
    int n, bedrooms, bathrooms, total = 0;
    cin >> n;

    string type;

    for (int i = 0; i < n; i++) {
        cin >> type >> bedrooms >> bathrooms;
        total += 50 * bedrooms + bathrooms * 100;
        if (type == "apartment") {
            total += 100;
        }
    }
    cout << total << endl;
}

/* Operator Overloading */
class Matrix {
public:
    vector<vector<int>> a;

    Matrix operator + (Matrix const& right) {
        vector<vector<int>> new_a;
        for (int i = 0; i < a.size(); i++) {
            vector<int> row;
            for (int j = 0; j < a[0].size(); j++) {
                row.push_back(a[i][j] + right.a[i][j]);
            }
            new_a.push_back(row);
        }
        Matrix result;
        result.a = new_a;

        return result;
    }
};

/* Exceptional Server */
void exceptional_server() {
    /* try {
        long long result = Server::compute(A, B);
        cout << result << endl;
    }
    catch (const std::bad_alloc& e) {
        cout << "Not enough memory" << endl;
    }
    catch (const std::exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Other Exception" << endl;
    }
    */
}

/* Virtual Functions */

class Person2 {
protected:
    string name;
    int age;

public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person2 {
private:
    int publications;
    static int counter;
    int cur_id;
public:
    Professor() { cur_id = ++counter; }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        string output = name + " " + to_string(age) + " " + to_string(publications) + " " + to_string(cur_id);
        cout << output << endl;
    }
};

class Student : public Person2 {
private:
    vector<int> marks;
    static int counter;
    int cur_id;

public:
    Student() { cur_id = ++counter; }

    void getdata() override {
        int mark;
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> mark;
            marks.push_back(mark);
        }
    }

    void putdata() override {
        int sum = 0;
        for (auto& n : marks) sum += n;

        string output = name + " " + to_string(age) + " " + to_string(sum)
            + " " + to_string(cur_id);;
        cout << output << endl;
    }
};

int Professor::counter = 0;
int Student::counter = 0;

int main() {
    return 0;
}