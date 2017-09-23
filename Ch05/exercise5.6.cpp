#include <iostream>
#include <vector>
#include <string>

int main()
{
    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    std::string lettergrade;
    for (int grade; std::cin >> grade;) {
        lettergrade = (grade < 60) ? scores[0] : scores[(grade-50)/10];
        lettergrade += (grade < 60 || grade == 100) ? "" : (grade%10 > 7) ? "+" : (grade%10 < 3) ? "-" : "";
        std::cout << lettergrade << std::endl;
    }
    return 0;
}
