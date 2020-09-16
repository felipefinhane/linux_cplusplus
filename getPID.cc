#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
    pid_t PID,PPID;
    PID = getpid();
    PPID = getppid();
    cout << "The PID of the current process: " << PID << endl;
    cout << "The PID of the parent process: " << PPID << endl;
    return 0;
}
