//
// Created by lihaohan on 26/02/2017.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void ReadFileToVec(const std::string& fileName, vector<std::string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        std::string buf;
        while (std::getline(ifs, buf))
        {
            vec.push_back(buf);
        }
    }
}

int main()
{
    vector<std::string> vec;
    ReadFileToVec("../data/book.txt", vec);
    for (const auto &str : vec)
    {
        std::cout << str << std::endl;
    }
    return 0;
}
