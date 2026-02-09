#include <iostream>
using namespace std;
class Polynomial {
    int coeff[10];
    int degree;
public:
    void input() {
        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter coefficients:\n";
        for(int i=0;i<=degree;i++)
            cin >> coeff[i];
    
    }
    int evaluate(int x) {
        int result = 0;
        int power = 1;

        for(int i=0;i<=degree;i++) {
            result += coeff[i] * power;
            power *= x;
        }
        return result;
    }
};
int main() {
    Polynomial p;
    p.input();

    int x;
    cout << "Enter x: ";
    cin >> x;

    cout << "Value = " << p.evaluate(x);
}
