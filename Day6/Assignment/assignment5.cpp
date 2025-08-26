#include<iostream>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    
    public: 
        Date(){
            this->day = 0;
            this->month = 0;
            this->year = 2025;
        }

        Date(int day, int month, int year): day(day), month(month), year(year){}

        int getDay(){
            return this->day;
        }

        int getMonth(){
            return this->month;
        }

        int getYear(){
            return this->year;
        }


        void setDay(int day){
            this.day = day;
        }

        void setMonth(int month){
            this->month = month;
        }

        void setYear(int year){
            this->year = year;
        }

        string toString(){
            stringstream ss;
            ss << this->day << " " << this->month << " " << this->year;
            return ss.str();
        }
};


class Student{
    private:
        int id; 
        int marks;
        string course;
        Date joiningDate;
        Date endDate;

    public: 
        Student(): id(0), marks(0), course("DAC"), Date(21,8, 25), Date(15, 2, 26){}
        
        Student(int id, int marks, string course, Date joiningDate, Date endDate): id(id), marks(marks), course(course), joiningDate, endDate {}
        
        //Getters
        int getId(int id){
            return this->id;
        }

        int getMarks(){
            return this->marks;
        }

        string getCourse(){
            return this->course;
        }

        Date getJoiningDate(){
            return this->joiningDate;
        }

        Date getEndDate(){
            return this->endDate;
        }

        //Setters

        void setId(int id){
            this->id = id;
        }

        void setMarks(int marks){
            this->marks = marks;
        }

        void setCourse(string course){
            this->course = course;
        }

        void setJoiningDate(Date date){
            this->joiningDate = date;
        }

        void setEndDate(Date endDate){
            this->endDate = endDate;
        }



        void printStudent(){
            cout << "Id : " << this->id << "Marks: " << this->marks << "Course: " << this->course << "Joining Date: " << this->joiningDate.toString() << "End Date: " << this->endDate.toString;
        }
}



class Person{
    private:
        string name;
        string address;
        Date birthDate;
    
    public:
        Person(): name(""), address(""), Date(1,1,2000){}
        Person(string name, string address, Date birthDate): name(name), address(address), birthDate(birthDate){}

       void printPerson(){
         cout << this->name << this->address << this->birthDate.toString();
       }

}


int main(){
    return 0;
}