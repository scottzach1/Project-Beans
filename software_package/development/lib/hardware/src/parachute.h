#ifndef LIB_HARDWARE_SRC_PARACHUTE_H_
#define LIB_HARDWARE_SRC_PARACHUTE_H_

/**
 *Library which handles interactions with the Lora.
 **/
class Parachute {
 public:
  /**
   * Constructor
   **/
  Parachute();
  /**
   * Destructor
   **/
  ~Parachute();

  /**
   * Ignites the ejection charge to launch the parachute.
   **/
  void ignite();
};

#endif  // LIB_HARDWARE_SRC_PARACHUTE_H_
