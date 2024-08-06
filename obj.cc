#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Function prototypes
void writeTextFile(const string &filename);
void readTextFile(const string &filename);
void appendTextFile(const string &filename);
void writeBinaryFile(const string &filename, const vector<int> &data);
void readBinaryFile(const string &filename);

int main()
{
    string textFilename = "example.txt";
    string binaryFilename = "example.bin";

    // Writing to a text file
    writeTextFile(textFilename);

    // Reading from a text file
    readTextFile(textFilename);

    // Appending to a text file
    appendTextFile(textFilename);

    // Reading from a text file again to see the appended content
    readTextFile(textFilename);

    // Data to write to a binary file
    vector<int> data = {1, 2, 3, 4, 5};

    // Writing to a binary file
    writeBinaryFile(binaryFilename, data);

    // Reading from a binary file
    readBinaryFile(binaryFilename);

    return 0;
}

void writeTextFile(const string &filename)
{
    ofstream outFile(filename);
    if (outFile.is_open())
    {
        outFile << "This is an example of writing to a text file.\n";
        outFile << "Writing another line to the text file.\n";
        outFile.close();
        cout << "Successfully wrote to " << filename << endl;
    }
    else
    {
        cerr << "Unable to open file " << filename << endl;
    }
}

void readTextFile(const string &filename)
{
    ifstream inFile(filename);
    if (inFile.is_open())
    {
        string line;
        cout << "Contents of " << filename << ":\n";
        while (getline(inFile, line))
        {
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cerr << "Unable to open file " << filename << endl;
    }
}

void appendTextFile(const string &filename)
{
    ofstream outFile(filename, ios::app);
    if (outFile.is_open())
    {
        outFile << "Appending a new line to the text file.\n";
        outFile.close();
        cout << "Successfully appended to " << filename << endl;
    }
    else
    {
        cerr << "Unable to open file " << filename << endl;
    }
}

void writeBinaryFile(const string &filename, const vector<int> &data)
{
    ofstream outFile(filename, ios::binary);
    if (outFile.is_open())
    {
        for (int num : data)
        {
            outFile.write(reinterpret_cast<const char *>(&num), sizeof(num));
        }
        outFile.close();
        cout << "Successfully wrote to " << filename << " in binary mode." << endl;
    }
    else
    {
        cerr << "Unable to open file " << filename << endl;
    }
}

void readBinaryFile(const string &filename)
{
    ifstream inFile(filename, ios::binary);
    if (inFile.is_open())
    {
        vector<int> data;
        int num;
        while (inFile.read(reinterpret_cast<char *>(&num), sizeof(num)))
        {
            data.push_back(num);
        }
        inFile.close();
        cout << "Contents of " << filename << " in binary mode:\n";
        for (int num : data)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cerr << "Unable to open file " << filename << endl;
    }
}
