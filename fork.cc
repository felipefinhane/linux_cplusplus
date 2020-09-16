#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    pid_t PID, CPID;
    PID = getpid();
    CPID = fork();
    if (CPID<0)
    {
        cout << "Error starting child process\n";
        return 1;
    }
    else
    {
        cout << "The PID of the current process: " << PID << endl;
        cout << "The PID of the new child process: " << CPID << endl;
    }
    return 0;
}
