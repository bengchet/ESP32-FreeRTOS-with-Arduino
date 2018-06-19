# ESP32-FreeRTOS-with-Arduino
Project template with useful Arduino libraries imported. With this template FreeRTOS programming can be implemented.

## Installation:
- Make sure you have git command installed.
- ```git clone https://github.com/bengchet/ESP32-FreeRTOS-with-Arduino.git```

## Note:
- At this point, I assume you have setup toolchain and esp-idf properly. If that is not the case, please look at [here](https://dl.espressif.com/doc/esp-idf/latest/get-started/)
- esp-idf and Arduino libraries are still at very active development and there might be new changes. If you wish to deploy these new changes, make sure you updated esp-idf and Arduino components. Deploy at your own risk!

### esp-idf
- Go to your cloned esp-idf folder, run ```git pull``` and ```git submodule update --init --recursive```

### Arduino components
- Just run ```git submodule update --init --recursive``` at this cloned folder.
