/*A number is a perfect square, or a square number, if it is the square of a positive integer. 
#For example, is a square number because ; it is also an odd square. 
#The first 5 square numbers are: , and the sum of the odd squares is . 
#Among the first 980 thousand square numbers, what is the sum of all the odd squares? 
#Show your work.*/

#include <iostream>
using namespace std;

int main() {
    long long totalSquares = 980000;
    long long m = totalSquares / 2;  // number of odd squares

    long long result = m * (2*m - 1) * (2*m + 1) / 3;

    cout << result << endl;
    return 0;
}
