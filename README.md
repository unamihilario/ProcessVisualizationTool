# Process Visualization Tool  

> Description
This project simulates the execution of processes in a system, displaying an execution timeline and total execution time. It includes:

A C++ backend for process simulation.

A web-based frontend for interactive visualization.

> Features
C++ Process Simulator
Accepts user input for the number of processes and their execution times.

Ensures execution times are positive.

Displays a timeline of process execution.

Calculates the total execution time.

Web Interface (Frontend)
Provides a user-friendly interface for process visualization.

Displays execution order dynamically.

Interactive UI for testing different scenarios.

> How to Run
1. Running the C++ Simulator
Compile the Code:
bash
g++ src/process_execution.cpp -o process_simulator
Run the Executable:
bash
./process_simulator
2. Running the Website Locally
Open public/frontend.html in a browser.

Interact with the UI to visualize process execution.


> Example Output
Enter the number of processes: 3
Enter execution time for process p1: 5
Enter execution time for process p2: 3
Enter execution time for process p3: 2

Process Execution Timeline:
p1 executed for 5 units of time.
p2 executed for 3 units of time.
p3 executed for 2 units of time.

Execution completed in 10 units of time.

> Deployment (Optional)
If deploying online:

Use GitHub Pages
