#include <iostream>
#include <iomanip>
using namespace std;
#include <cstring>


void func(string motivation_to_work) {

    int current_time = 550;
    int alarm_time = 600;

    bool is_alarm_going_off;

    printf("getUp\n");
    while (current_time < 800) {
        printf("Current Time: %d\n", current_time);

        current_time = current_time + 1;

        if (current_time < 800) {
            is_alarm_going_off = 1;

            if (is_alarm_going_off) {
                printf("Groan loudly \n");

                if (motivation_to_work == "high") {
                    printf("get out of bed\nget ready");
                    break;
                }
                else {
                    printf("hit snooze button\n");
                    is_alarm_going_off = false;
                    alarm_time = alarm_time + 10;
                }
                if(current_time >= 755){
                    motivation_to_work = "panicMade";
                    printf("Jump out of bed\nPut on clean shirt");
                }
            }
        }
    }
}

int main() {
    string inputOfFunc;

    printf("What is your motivation to work (low, med, high)? ");
    cin >> inputOfFunc;

    func(inputOfFunc);

    return 0;
}
        
// SET alarm_time TO 600   
// SET time_currently TO 550

// OUTPUT "What is your motiviation to work (low, med, high)? "
// INPUT motivation_to_work

// SET is_alarm_going_off TO false

// WHILE time_currently is less than 800: 
//     OUTPUT "Current time: "
//     OUTPUT time_currently
  
//     IF time_currently is alarm_time:
// 		SET is_alarm_going_off true
  
//     IF is_alarm_going_off is true:  
//         Groan loudly  
// 		IF motivation_to_work is "high"
//   			GET out of bed
// 			GET ready
// 			BREAK LOOP
// 		ELSE
//           Hit snooze button  
// 		  SET is_alarm_going_off false	
//           ADD 10 minutes to alarm_time 
      
//    IF time_currently >= 755 AM:  
//         SET motivation_to_work TO "Panic Mode"  
//         JUMP out of bed  
//         PUT ON somewhat clean shirt  
//         BREAK LOOP

// 	SET time_currently TO time_currently + 10 