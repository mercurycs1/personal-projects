#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//int main() {
//    double price = 99.99;
//    //when using "float", type f at the end of variable.
//    float interest_rate = 3.67f;
//    //using "l" at the end of this variable makes it so its not compiled as an integer
//    long file_size = 90000L;
//    char letter = 'a';
//    //auto allows IDE to choose type automatically. in this case, it is a bool
//    auto is_valid = false;
//    return 0;
//}

// int main(){
//     int number = 2;
//     cout << number;
//     return 0;
// }

//int main(){
//
//    //binary = 0b...
//    //hexadecimal = 0x...
//
//    int number = 255;
//    number--;
//    cout << number;
//    return 0;
//}

//int main(){
//    short number = 100;
//    int another = number;
//    cout << another;
//    return 0;
//}

//int main(){
//    //this is a random number generator. using the include tag, we get the amount of seconds
//    //elapsed from 1970 jan 1st. good for beginners.
//    srand(time(nullptr));
//    int number = rand() % 10;
//    //% = modulus
//    cout << number;
//    return 0;
//}

//rolling a dice. (my solution)
//int main(){
//    cout << "use '1' to roll the dice!";
//    srand(time(nullptr));
//    bool dice = 1;
//    cin >> dice;
//    int max_value = 6;
//    int min_value = 1;
//    int number = rand() % (max_value - min_value + 1) + min_value;
//    cout << number;
//    return 0;
//}

//rolling a dice, youtube solution. this actually includes two dice roll instead of one.
//of course, when you roll a dice, you roll two dices. i didnt think of that and will keep it in mind for next time.

int main(){
    const short min_value = 1;
    const short max_value = 6;

    srand(time(nullptr));
    short first = (rand() % (max_value - min_value + 1)) + min_value;
    short second = (rand() % (max_value - min_value + 1)) + min_value;
    cout << first << ", " << second;
    return 0;
}
