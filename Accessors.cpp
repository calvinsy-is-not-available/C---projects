#include <iostream>

class Stove {
    private:
        double temperature = 0;
    public: 
        void setTemperature(double temperature) {
            if (temperature > 0) {
                this->temperature = temperature;
            }
            // Makes sure a user doesn't set their house on fire
            else if (temperature >= 525) {
                temperature = 525;
            }
            
        }
        double getTemperature() {
            return temperature;
        }

};

int main() {

    Stove stove;

    stove.setTemperature(450.0);

    return 0;
}