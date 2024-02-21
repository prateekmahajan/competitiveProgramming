#include <iostream>
#include <fstream>
// DO in Java. Have Java Compiler.
using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    if (!outputFile.is_open())
    {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    // Read input from input.txt and write output to output.txt
    string input;
    string sum;
    while (inputFile >> input)
    {
        if (true)
        {
            sum += input;
        }
    }
    outputFile << "Sum: " << sum << endl;

    // Close files
    inputFile.close();
    outputFile.close();

    return 0;
}
