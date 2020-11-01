#include "UserAccount.h"

UserAccount::UserAccount(string fileName) {
    inFile = InputFile();
    inFile.readFile("resources/input.txt");
    formatLines(inFile.getLines());
}

UserAccount::~UserAccount() {

}

void UserAccount::formatLines(vector<string> linesFromFile) {
       
    bankTransfer = stof(linesFromFile.at(0));

    for (int i = 1; i < linesFromFile.size(); i++) {
        float duePayment = stof(linesFromFile.at(i));
        if (duePayment <= bankTransfer) {
            duePayments.push_back(duePayment);
        }
    }
}

vector<float> UserAccount::getDuePayments() {
    return duePayments;
}

float UserAccount::getBankTransfer() {
    return bankTransfer;
}

void UserAccount::start() {
    float sum = 0;
    vector<float> result;
    for (int i = 0; i < duePayments.size(); i++) {
        if (retrieveBankTransfer(i + 1, sum + duePayments.at(i), result)){
            result.push_back(duePayments.at(i));
            break;
        }
    }
    
    inFile.writeOutput(result, "resources/output.txt");
}

bool UserAccount::retrieveBankTransfer(int idx, float sum, vector<float>& result)
{
    if (sum == bankTransfer) {
        cout << "Found " << sum << endl;
        return true;
    }

    if (sum < bankTransfer) {
        for (int i = idx; i < duePayments.size(); i++)
            if (retrieveBankTransfer(i + 1, sum + duePayments.at(i), result)) {
                result.push_back(duePayments.at(i));
                return true;
            }

    }

    return false;
}
