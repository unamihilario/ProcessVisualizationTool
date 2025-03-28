#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Process
{
    string name;
    int executionTime;
};

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++)
    {
        processes[i].name = "p" + to_string(i + 1);
        cout << "Enter execution time for process " << processes[i].name << ": ";
        cin >> processes[i].executionTime;

        if (processes[i].executionTime <= 0)
        {
            cout << "Execution time must be positive. Try again.\n";
            i--;
        }
    }

    cout << "\nProcess Execution Timeline:\n";
    int totalTime = 0;

    for (const auto &p : processes)
    {
        cout << p.name << " executed for " << p.executionTime << " units of time.\n";
        totalTime += p.executionTime;
    }
    cout << "\nExecution completed in " << totalTime << " units of time.\n";

    return 0;
}