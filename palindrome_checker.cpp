#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    queue<char> q;

    // push and enqueue all characters
    for (char c : str) {
        if (isalnum(c)) {              // ignore spaces and symbols
            c = tolower(c);
            s.push(c);
            q.push(c);
        }
    }

    // compare stack and queue
    while (!s.empty()) {
        if (s.top() != q.front())
            return false;
        s.pop();
        q.pop();
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str))
        cout << "The string is a palindrome!" << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
