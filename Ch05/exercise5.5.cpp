#include <iostream>
#include <vector>
#include <string>

int main()
{
    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    std::string lettergrade;
    for (int grade; std::cin >> grade;) {
        if (grade < 60) lettergrade = scores[0];
        else {
            lettergrade = scores[(grade-50)/10];
            if (grade != 100) {
                if (grade%10 > 7) lettergrade += '+';
                else if (grade%10 < 3) lettergrade += '-';
            }
        }
    }
    std::cout << lettergrade << std::endl;
    return 0;
}
