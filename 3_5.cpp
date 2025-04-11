#include <iostream>
using namespace std;


int superDigit(long long n) {
    if (n < 10)
        return n;

    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return superDigit(sum);
}

int main() {
    string n;
    int k;

    cout << "Enter number as string: ";
    cin >> n;
    cout << "Enter value of k: ";
    cin >> k;


    long long initialSum = 0;
    for (char digit : n) {
        initialSum += digit - '0';
    }


    long long total = initialSum * k;


    int result = superDigit(total);

    cout << "Super digit is: " << result << endl;
    cout<<"24ce052_pushti";
    return 0;
}

