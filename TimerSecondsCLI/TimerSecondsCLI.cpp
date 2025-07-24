#include <iostream>
#include <Windows.h>
#include <print>

using namespace std;

static void sleepTimer(int a) {

	Sleep(a);
}

class SecondsTime {

public:

	void getSeconds() {

		print("Hello World", nullptr, nullptr);
	}


};

class Time : SecondsTime {

public:

	int EndTime(int seconds) {


		if (seconds == 25 * 60) {

			Beep(523, 500);

		}

		return seconds;
	}



};

int main() {


	auto s = [](int seconds) {

		return seconds;

	};

	Time time;

	int j = 2;

	while (j > 1) {

		j += 1;

		sleepTimer(1000);

		Time* seconds = &time;

		cout << "Seconds: " << seconds->EndTime(j) << endl;
	}


	system("pause > 0");
	return 0;
}