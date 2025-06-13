#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queue_array[5];

    public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert(){
        int num;
        cout << "Enter a Number: ";
        cin >> num;
        cout << endl;

        //cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overflow\n";
            return;
        }

        //Cek apakah antrian kosong
        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }
        else {
            // Jika Rear berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
            REAR = 0;
            else
            REAR = REAR + 1;
        }
    queue_array[REAR] = num;
    }

    void remove() {
        //cek apakah antrian kosong
        if (FRONT == -1) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe element deleted from the queue is: " << queue_array[FRONT]
    
    }


}