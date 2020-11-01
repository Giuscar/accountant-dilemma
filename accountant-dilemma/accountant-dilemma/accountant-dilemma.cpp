#include <string>
#include "UserAccount.h"
using namespace std;

int main(int argc, char **argv)
{
    UserAccount userAccount = UserAccount("resources/input.txt");
    userAccount.start();

    return 0;
}
