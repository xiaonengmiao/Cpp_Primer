//
// Created by lihaohan on 26/02/2017.
//

#include <iostream>
#include <fstream>

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (std::getline(ifs, buf))
        {
            vec.push_back(buf);
        }
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("../data/book.txt", vec);
    for (const auto &str : vec)
    {
        std::cout << str << std::endl;
    }
    return 0;
}