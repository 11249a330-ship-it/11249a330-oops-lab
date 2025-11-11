#include <iostream>
#include <cstring>  // for strcpy, strcmp
using namespace std;

class MyString {
private:
    char str[100];

public:
    // Default constructor
    MyString() {
        str[0] = '\0';
    }

    // Parameterized constructor
    MyString(const char s[]) {
        strcpy(str, s);
    }

    // Display function
    void display() {
        cout << str;
    }

    // Overload assignment operator (=)
    void operator=(MyString s) {
        strcpy(str, s.str);
    }

    // Overload comparison operator (==)
    bool operator==(MyString s) {
        if (strcmp(str, s.str) == 0)
            return true;
        else
            return false;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");
    MyString s3;

    cout << "Before assignment:\n";
    cout << "s1 = "; s1.display();
    cout << "\ns2 = "; s2.display();
    cout << endl;

    // Assignment using overloaded =
    s3 = s1;

    cout << "\nAfter assignment:\n";
    cout << "s3 = "; s3.display();
    cout << endl;

    // Comparison using overloaded ==
    if (s1 == s2)
        cout << "\ns1 and s2 are equal\n";
    else
        cout << "\ns1 and s2 are not equal\n";

    if (s1 == s3)
        cout << "s1 and s3 are equal\n";
    else
        cout << "s1 and s3 are not equal\n";

    return 0;
}
