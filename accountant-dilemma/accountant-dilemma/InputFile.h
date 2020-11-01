#include <vector>
#include <string>
using namespace std;
class InputFile
{
private:
	vector<string> lines;
public:
	InputFile();
	~InputFile();
	vector<string> getLines();
	void readFile(string fileName);
	void writeOutput(vector<float> result, string fileName);
};

