[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/owevXlA7)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=10986461)
# Supermarket Checkout Simulation  

Write a program that simulates a checkout line at a supermarket. Your program should simulate a 12-hour period (720 minutes) and report the statistics requested below. Build your simulation according to the following assumptions:

* During each minute of the simulation there is a 0.25 probability that a customer enters the checkout line. No more than one customer will arrive at the same minute.
* When a customer arrives at the checkout register, it takes at least 1 minute but no more than 4 minutes to service that customer.

Use a random number generator to incorporate these assumptions. Use a queue to represent the line, placing the customer's arrival time in the queue.

Upon completion of the simulation, report the following statistics:

* The number of customers served.
* The average wait time (includes time in line and the time it takes to chec out at the register).
* The longest wait time of any customer.
* The average line length (mean average over every minute of the simulation).
* The longest line length at any time during the simulation.

Here are results from a sample run of the program. Of course, since a random number generator is involved results may vary. Averages should be expressed with one decimal place of precision.

```
Customers served: 184
Average wait time: 5.1
Longest wait time: 10
Average line length: 1.3
Longest line: 4
```
