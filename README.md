# Fork System Call Activity

Please see the attached details of the three programs I have written for the class activity. They showcase how to use the `fork()` system call in different scenarios and how parent and child processes work together.

## Programs

smartHome.c: Simulates a smart home system that forks a child process to send a notification while the parent process sounds an alarm.

robotics.c: Forks a child process to simulate image processing, with the parent waiting for the child to finish before proceeding.

thermostat.c: Forks a child process to run a weather plugin using execv(), while the parent process monitors the home temperature.

## How to Compile and Run

To run the programs, enter these commands into Bash:

1. Clone the repository to your computer:

    git clone https://github.com/your-username/ClassActivityFork.git


2. Compile the C programs using `gcc`:

    gcc -o smartHome smartHome.c
    gcc -o robotics robotics.c
    gcc -o thermostat thermostat.c


3. Run the programs:

    ./smartHome
    ./robotics
    ./thermostat


