  #include <iostream>
using namespace std;
int main() {
    double temperature;

    cout << "Today's temperature: ";
    cin >> temperature;

    string message;
    if (temperature > 35) {
        message = "Hot Day";
    } else if (temperature >= 25 && temperature <= 35) {
        message = "Pleasant Day";
    } else {
        message = "Cool Day";
    }

    cout << "Message: " << message ;

    return 0;
}