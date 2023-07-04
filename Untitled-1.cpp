#include <iostream>
#include <climits>
#include <iomanip>

bool compare (float value, float reference, float epsilon) {
  return (value>=reference-epsilon) && (value<=reference+epsilon);
}

int main() {
  
  float speed =0;
  do {
    std::cout<<"Input delta: ";
    float delta;
    std::cin>>delta;

    if (std::cin.fail()) {
      std::cout<<"wrong input\n";
    } else {
      speed+=delta;
      if (speed<0) {
        speed=0;
      }
      if (speed>150) {
        speed=150;
      }
      char* speed_str;
      std::cout<<"current speed: ";
      std::cout<<std::fixed<<std::setprecision(2)<<speed;
      std::cout<<"\n";
    }

    
  } while (!compare(speed,0.0,0.001));
  
  
  

  
}