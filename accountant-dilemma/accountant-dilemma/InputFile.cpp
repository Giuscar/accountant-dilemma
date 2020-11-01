#include "InputFile.h"
#include <fstream>


InputFile::InputFile() {

}

InputFile::~InputFile() {

}

void InputFile::readFile(string fileName) {
    string line;
    ifstream myfile(fileName);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            lines.push_back(line);
        }
        myfile.close();
    }
}

vector<string> InputFile::getLines() {
    return lines;
}

void InputFile::writeOutput(vector<float> result, string fileName) {
    ofstream ofs(fileName, std::ofstream::out);
    for (auto it = result.begin(); it != result.end(); ++it)
        ofs << *it << endl;
    ofs.close();
}
