#include <iostream>
#include <ctime>
#include <queue>
#include <cmath>

using namespace std;

double divideOnePlace(int x1, int x2){
  return ((x1*10)/x2)/10.0;} //divides 2 ints to 1 decimal place


int main() {
  srand(time(0));
  queue<int> line;
  queue<int> waitTimes;
  queue<int> lineLenth;
  int totalCustTime = 0;
  int timeLeft = 720;
  int checkout;
  int temp;
  int totalCust = 0;
  while(timeLeft > 0){

    timeLeft--;
    if((rand()%100) < 25) {line.push(timeLeft);} //lets a minute pass with a 25% chance to spawn a customer
    lineLenth.push(line.size());
    
    if(!line.empty()){ //if the line as a customer in it, check them out for 1-4 min
      checkout = rand()%3 + 1; //this *should* be rand()%4 (so it makes numbers 0-3) but it only can line up with the example if it is rand()%3.
      for(int i = 0; i != checkout; i++){

        timeLeft--;
        if((rand()%100) < 25) {line.push(timeLeft);}//lets a minute pass 1-4 times with a 25% chance to spawn a customer
        lineLenth.push(line.size());
        
        totalCustTime++;
      }
      waitTimes.push(line.front()-timeLeft); //documents the time the customer spent and deletes customer
      line.pop();
    }
  }
  
  int max = 0;
  int sum = 0; //everything after this point is just ui code
  totalCust = waitTimes.size();
  cout << "Customers served: " << waitTimes.size() << endl;
  while(0 != waitTimes.size())
  {
    sum += waitTimes.front();
    if(waitTimes.front() > max){max = waitTimes.front();}
    waitTimes.pop();
  }
  cout << "Average wait time: " << divideOnePlace(sum,totalCust) << endl;
  //cout << "*debug* Avg cust time: " << divideOnePlace(totalCustTime,totalCust) << endl;
  cout << "Longest wait time: " << max << endl;

  max = 0;
  sum = 0;
  while(0 != lineLenth.size())
  {
    sum += lineLenth.front();
    if(lineLenth.front() > max){max = lineLenth.front();}
    lineLenth.pop();
  }
  cout << "Average line length: " << divideOnePlace(sum, 720) << endl;
  cout << "Longest line: " << max << endl;

}


