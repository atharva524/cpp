#include<iostream>
using namespace std;

class Time{

    private:
        int seconds;
        int minutes;
        int hours;

    public:
        Time(): seconds(0), minutes(0), hours(0){}

        Time(int seconds, int minutes, int hours):seconds(seconds), minutes(minutes), hours(hours) {}

        // Getters
        int getSeconds(){
            return this->seconds;
        }
        int getHours(){
            return this->hours;
        }
        int getMinutes(){
            return this->minutes;
        }

        // Setters
        void setSeconds(int seconds){
            this->seconds = seconds;
        }

        void setMinutes(int minutes){
            this->minutes = minutes;
        }
        
        void setHours(int hours){
            this->hours = hours;
        }

        // Print

        void printTime(){
            cout << "Time: " << this->seconds << ": " << this->minutes << ": " << this->hours << endl; 
        }
};

int inputSize(){
    int size;
    cout << "How many date you want to save? Enter integer value (<10): " <<  endl;
    cin >> size;
    return size;
}

void initalizeDates(int size, Time *time){
    time = new Time[size];

    for(int i =0; i<size; i++){
        cout << time[i].getSeconds() << endl;
    }
}

int menuList(){
    int choice;
    cout << "1. Add Time" << endl;
    cout << "2. Display all time" << endl;
    cout << "3. Display only hours" << endl;
    cout << "4. Exit" << endl;

    cin >> choice;
    return choice;
}

void addTime(int size, Time *time){
    int second, minutes, hour;
    for(int i =0; i<size; i++){
        cout << "Enter the seconds for " << i << " entry: " << endl;
        cin >> second;
        cout << "Enter the minutes for " << i << " entry: " << endl;
        cin >> minutes;
        cout << "Enter the hour for " << i << " entry: " << endl;
        cin >> hour;

        time[i].setSeconds(second);
        time[i].setMinutes(minutes);
        time[i].setHours(hour);

    }

    cout << "Time recorded successfully!" << endl;
}

void displayAllTime(int size, Time *time){
    for(int i=0; i<size; i++){
        time[i].printTime();
    }
}

void displayOnlyHours(int size, Time *time){
    for(int i=0; i<size; i++){
        cout << "Hour "<< i << " : " << time[i].getHours() << endl;
    }
}

int main()
{   
    int choice;
    Time *time;
    int size = inputSize();
    initalizeDates(size, time);

    while ((choice = menuList())!=4)
    {
        switch(choice)
        {
            case 1:  
                addTime(size, time);
                break;
            case 2: 
                displayAllTime(size, time);
                break;
            case 3: 
                displayOnlyHours(size, time);
                break;
            
        }
    }
    
    // delete[] time;
    // time = NULL;

    

    return 0;
}
