#include <iostream>
#include <fstream>
#include <string>

std::string manualReplace(const std::string& source, const std::string& from, const std::string& to)
{
    std::string result;
    size_t start = 0;
    size_t end = source.find(from);

    while (end != std::string::npos)
    {
        result += source.substr(start, end - start) + to;
        start = end + from.length();
        end = source.find(from, start);
    }

    result += source.substr(start);
    return result;
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "not enough arguments" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];
    std::string outputFilename = "output.txt";

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return (1);
    }
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error opening file: " << outputFilename << std::endl;
        return (1); 
    }

    std::string line;
    while(std::getline(inputFile, line))
    {
        outputFile << manualReplace(line, searchStr, replaceStr) << "\n";
    }

    inputFile.close();
    outputFile.close();

    return (0);

}