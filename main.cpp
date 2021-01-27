#include <iostream>
#include <cstdlib>
#include <random>
#include <cstdio>

using std::cout;
using std::cin;
using std::endl;

double generateRandom(double min, double max) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(min, max);
    return dist(mt);
}

int main() {
    std::string input;
    cout << "Enter the text you would like to Kishoreify: ";
    getline(cin, input, '\n');

    double seedy = generateRandom(50, 100);
    for(char &character : input) {
        if(generateRandom(1, 100) < seedy) {
            if((int) character >= 97 && (int) character <= 122) {
                character = (char) (((int) character) - 32);
            }
        }
    }

    cout << input << endl;
}
