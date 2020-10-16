#ifndef LIB_HARDWARE_SRC_LORA_H_
#define LIB_HARDWARE_SRC_LORA_H_

/**
 *Library which handles interactions with the Lora.
 *
 * Note: This has not been integrated into the final rocket.
 * To see a working implementation, checkout the Lora projects within the
 *`software_package/testing` directory.
 */
class Lora {
 public:
  /**
   * Constructor
   **/
  Lora();
  /**
   * Destructor
   **/
  ~Lora();

  /**
   * Sends a packet to base station via Lora.
   **/
  void send_packet();

  /**
   * Read a packet from base station via Lora.
   **/
  void receive_packet();
};

#endif  // LIB_HARDWARE_SRC_LORA_H_
