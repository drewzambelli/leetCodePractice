class Employee {








    private:
        string name;
        string position;
        int numShifts;
        int numDays;
}


Employee::Employee(std::string name, std::string position){
    this->name = name;
    this->position = position;
    numShifts = 0;
    numDays = 0;
}

void Employee::clockOut(int shifts) {
    numShifts += shifts;
}

double Employee::getAverageShifts() {
    double ave;
    if(numDays == 0) {
        return 0;
    }
    ave = numShifts/numDays;
    return ave;
}

int main () {

    Employee person1("Drew", "worker");
    person1.clockOut(6);
    person1.clockOut(7);
    person1.clockOut(8);
    std::cout << person1.getAverageShifts() << std::endl;
}
