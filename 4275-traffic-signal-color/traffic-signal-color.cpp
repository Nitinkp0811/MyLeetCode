class Solution {
public:
    string trafficSignal(int timer) {
        string red = "Red";
        string orange = "Orange";
        string green = "Green";
        string invalid = "Invalid";

        if(timer == 0) return green;
        if(timer == 30) return orange;
        if(timer > 30 && timer <= 90) return red;

        return invalid;
    }
};