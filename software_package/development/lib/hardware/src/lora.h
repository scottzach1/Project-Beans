#ifndef SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_LORA_H_
#define SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_LORA_H_



/**
 *Library which handles interactions with the Lora.
**/
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

#endif  // SOFTWARE_PACKAGE_DEVELOPMENT_LIB_HARDWARE_SRC_LORA_H_
