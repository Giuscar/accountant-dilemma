#pragma once
#include <string>
#include <vector>
#include "InputFile.h"
#include <iostream>

using namespace std;

class UserAccount
{
private:
	vector<float> duePayments;
	float bankTransfer;
	InputFile inFile;
	bool retrieveBankTransfer(int idx, float sum, vector<float>& result);
public:
	UserAccount(string fileName);
	~UserAccount();
	void formatLines(vector<string> linesFromFile);
	vector<float> getDuePayments();
	float getBankTransfer();
	void start();
};

