#include <iostream>
#include <Windows.h>

using namespace std;

void sleepTimer(int a) {

	Sleep(a);
}

int main() {


	for (int i = 0; i > -1 ; i++) {

		sleepTimer(1000);

		if (i > 1) {

			int seconds = i;
			cout << "Seconds: " << seconds << endl;
		
		}
	
		else if (i == 25 * 60) {

			Beep(523, 500);

		}


	}


	system("pause > 0");
	return 0;
}
