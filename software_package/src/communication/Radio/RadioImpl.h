#ifndef RADIOIMPL_H
#define RADIOIMPL_H

class RadioImpl: public RadioInterface {
  public:
    //constructor / destructor
    RadioImpl()
    ~RadioImpl()

    //fields

    //inherited methods
    int runDiagnostics(){
      //TODO
    }

    int getPostFlightData(){
      //TODO
    }

    int getInflightData(){
      //TODO:
    }

    
  private:
    int pollSensors(){
      //TODO
    }

    int pollServos(){
      //TODO
    }

    int getCurrentPos(){
      //TODO
    }

    int getRocketState(){
      //TODO
    }
}

#endif //RADIOIMPL_H
