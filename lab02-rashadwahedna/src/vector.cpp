#include <iostream>
using namespace std;

void print_vector(int a1[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a1[i] << "\t";
    }
    cout << endl;
}

void input_vector(int a1[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
}

void add_vector(int a1[], int a2[], int res[], int n) {
    for (int i = 0; i < n; i++) {
        res[i] = a1[i] + a2[i];
    }
}

void subtract_vectors(int a1[], int a2[], int res[], int n) {
    for (int i = 0; i < n; i++) {
        res[i] = a1[i] - a2[i];
    }
}

bool compare_vectors(int a1[], int a2[], int n) {
    for (int i = 0; i < n; i++) {
        if (a1[i] != a2[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int n;
    cin >> n;
    int a1[10];
    int a2[10];
    int res[10];

    input_vector(a1, n);
    input_vector(a2, n);

    char op;
    cin >> op;

    if (op == '+') {
        add_vector(a1, a2, res, n);
        print_vector(res, n);
    } 
    else if (op == '-') {
        subtract_vectors(a1, a2, res, n);
        print_vector(res, n);
    } 
    else if (op == '=') {
        if (compare_vectors(a1, a2, n) == true) {
            cout << "They are equal." << endl;
        } 
        else {
            cout << "Not Equal." << endl;
        }
    }

    return 0;
}

