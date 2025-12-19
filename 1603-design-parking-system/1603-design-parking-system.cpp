class ParkingSystem {
public:
    int bigSpace;
    int mediumSpace;
    int smallSpace;

    ParkingSystem(int big, int medium, int small) {
        bigSpace = big;
        mediumSpace = medium;
        smallSpace = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(bigSpace == 0){
                return false;
            }else{
                bigSpace--;
                return true;
            }
        }else if(carType == 2){
            if(mediumSpace == 0){
                return false;
            }else{
                mediumSpace--;
                return true;
            }
        }else{
            if(smallSpace == 0){
                return false;
            }else{
                smallSpace--;
                return true;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */